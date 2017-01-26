#include "video_cam.hpp"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <libv4l1-videodev.h>

using namespace cv;
using namespace std;

VideoCam::VideoCam():id(0),cap(nullptr),bSuccess(false),dWidth(0.0),dHeight(0.0),isfile(false)
{

}

VideoCam::VideoCam( int dev):id(dev),cap(nullptr),bSuccess(false),dWidth(0.0),dHeight(0.0),isfile(false)
{

}

VideoCam::VideoCam( std::string new_file_path):id(-1), cap(nullptr) ,bSuccess(false),dWidth(0.0),dHeight(0.0),isfile(false),file_path(new_file_path)
{

}

VideoCam::~VideoCam()
{
  if(cap){
    delete cap;
    cap = nullptr;
  }  
}
int VideoCam::init(std::string new_file_path)
{
  printf("video cam::inited with file\n");
  isfile = true;
  file_path = new_file_path;
  return init();
}

int VideoCam::init()
{
  printf("VideoCam::init");
  if(isfile)
  {
    if(!cap)
      cap = new cv::VideoCapture(file_path);
    else
      cap->open(file_path);
  }else{
    if(!cap)
      cap = new cv::VideoCapture(id);
    else
      cap->open(id);
  }  
  if (!cap->isOpened())  // if not success, exit program
  {
    cout << "Cannot open the video cam" << endl;
    return -1;
  }
  dWidth = cap->get(CV_CAP_PROP_FRAME_WIDTH); //get the width of frames of the video
  dHeight = cap->get(CV_CAP_PROP_FRAME_HEIGHT); //get the height of frames of the video
  cout << "Cam:" << id << " Frame size x: " << dWidth << " y: " << dHeight << endl;
  fps = cap->get(CAP_PROP_FPS);
  return 0;
}

int VideoCam::get(int value)
{
  return cap->get(value);
}

int VideoCam::close()
{
  printf("VideoCam::close\n");
  if( cap && (!isfile) )
    cap->release();
  //  delete cap;
  cap = nullptr;
  printf("VideoCam::closed\n");
  return 0;
}

int VideoCam::getFrame(Mat &frame)
{
  return  cap ? cap->read(frame) : -1;
}

int VideoCam::start_window_app()
{
  namedWindow("MyVideo",CV_WINDOW_AUTOSIZE); //create a window called "MyVideo"
  while (1)
  {
    Mat frame;
    Mat edges;
    bool bSuccess = cap ? cap->read(frame): false;  // read a new frame from video
    
    if (!bSuccess) //if not success, break loop
    {
      cout << "Cannot read a frame from video stream" << endl;
      break;
    }
    cvtColor(frame, edges, COLOR_BGR2GRAY);
    GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
    Canny(edges, edges, 0, 30, 3);
    imshow("MyVideo", edges); //show the frame in "MyVideo" window

    if (waitKey(30) == 27) //wait for 'esc' key press for 30ms. If 'esc' key is pressed, break loop
    {
      cout << "esc key is pressed by user" << endl;
      break; 
    }
  }
  return 0;
}

int VideoCam::setResolution(int width, int height, int &awidth, int &aheight)
{
  //if(!isfile)
  {  
    cap->set(CV_CAP_PROP_FRAME_WIDTH, width);
    cap->set(CV_CAP_PROP_FRAME_HEIGHT, height);
  
    awidth = cap->get(CV_CAP_PROP_FRAME_WIDTH); //get the width of frames of the video
    aheight = cap->get(CV_CAP_PROP_FRAME_HEIGHT); //get the height of frames of the video
      
    dWidth = awidth;
    dHeight = aheight;
    cout << "Cam:" << id << " now has Frame size x: " << awidth << " y: " << aheight << endl;
  }  
  return 0;
}

/**
return # of cams /dev/videoX

*/

int VideoCam::videocam_searcher(int max_cams, std::vector<VideoCamAttribute> &list_of_cams)
{
  int fd;
  struct video_capability video_cap;
  struct video_window     video_win;
  struct video_picture   video_pic;
  char cam_file[16];
  char perror_str[64];
  int cam_count = 0;

  int may_failed_cam = 0; //if maybe /dev/video0 is not available but /dev/video1
  for(int i=0;i<max_cams;i++)
  {
      sprintf(cam_file, "/dev/video%d",i);
      if( access( cam_file, R_OK ) == -1 ){
      //if((fd = open(cam_file, O_RDONLY)) == -1){
        sprintf(perror_str, "cam_info: Can't open device %s \n",cam_file);
        perror(perror_str);
        VideoCamAttribute newCam = {i, false, 0, 0, 0, 0};
        list_of_cams.push_back(newCam);
        //close(fd);
        if(may_failed_cam)
          break; 
        else
          may_failed_cam = 1;
      }
      else
      {  
        VideoCamAttribute newCam = {i, true, 0, 0, 0, 0};
        list_of_cams.push_back(newCam);
      }
      cam_count++;

  }    
    return cam_count;
}
