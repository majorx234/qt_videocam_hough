#include "video_file_hdl.hpp"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <fstream>

using namespace cv;
using namespace std;

VideoFile_hdl::VideoFile_hdl():imagecount(0)
{

}


VideoFile_hdl::VideoFile_hdl(Size newVideoSize) : videoSize(newVideoSize),imagecount(0)
{

}

VideoFile_hdl::~VideoFile_hdl()
{

}
int VideoFile_hdl::loadVideoRaw(std::string filename)
{
  /*
  clear();
  std::ifstream infile(filename, std::ios::in | std::ifstream::binary);
  std::istreambuf_iterator<char> iter(infile);
  std::copy(iter, std::istreambuf_iterator<char>{}, std::back_inserter(video_vec)); // this leaves newVector empty
  imagecount = video_vec.size();
  frame_iter = video_vec.begin();
  videoSize = (*frame_iter).size();
  return video_vec.size();*/
  return 0;
}
int VideoFile_hdl::saveVideoRaw(std::string filename)
{
  /*
  std::ofstream outfile(filename, std::ios::out | std::ofstream::binary);
  std::ostream_iterator<cv::Mat> output_iterator(outfile);
  std::copy(video_vec.begin(), video_vec.end(), output_iterator);
  outfile.flush();
  outfile.close();*/
  return 0;  //return size of file
}

int VideoFile_hdl::saveVideo(std::string filename)
{
  VideoWriter outputVideo(filename, CV_FOURCC('P','I','M','1'), 20, videoSize, true);
  if ( !outputVideo.isOpened() ) //if not initialize the VideoWriter successfully, exit the program
  {
    cout << "ERROR: Failed to write the video" << endl;
    //throw "ERROR: Failed to write the video";
    return -1;
  }

  for(auto frame : video_vec) {
    outputVideo.write(frame);  // 
  }
  return 0;
}

int VideoFile_hdl::loadVideo(std::string filename)
{
  clear();
  VideoCapture capture(filename);
  int dWidth, dHeight;

  dWidth = capture.get(CV_CAP_PROP_FRAME_WIDTH); //get the width of frames of the video
  dHeight = capture.get(CV_CAP_PROP_FRAME_HEIGHT); //get the height of frames of the video

  Size newFrameSize(static_cast<int>(dWidth), static_cast<int>(dHeight));
  videoSize = newFrameSize;
  clear();
  if( !capture.isOpened() ){
    //throw "Error when reading steam_avi";
    //printf("VideoFile_hdl::loadVideo capture not opened\n");
    return -1;
  }
  for( ; ; )
  {
      Mat frame;
      capture >> frame;
      if(frame.empty())
          break;
      video_vec.push_back(frame); //maybe use add_frame here
      imagecount++;
  }    
  frame_iter = video_vec.begin(); 
  return 0;
}

int VideoFile_hdl::loadVideo(std::string filename, int num_frames)
{
  clear();
  VideoCapture capture(filename);
  int dWidth, dHeight;

  dWidth = capture.get(CV_CAP_PROP_FRAME_WIDTH); //get the width of frames of the video
  dHeight = capture.get(CV_CAP_PROP_FRAME_HEIGHT); //get the height of frames of the video

  Size newFrameSize(static_cast<int>(dWidth), static_cast<int>(dHeight));
  videoSize = newFrameSize;
  clear();
  if( !capture.isOpened() ){
    //throw "Error when reading steam_avi";
    //printf("VideoFile_hdl::loadVideo capture not opened\n");
    return -1;
  }

  for(;;)
  {
      Mat frame;
      capture >> frame;
      if((frame.empty())|| (imagecount > num_frames-1))
          break;
      video_vec.push_back(frame); //maybe use add_frame here
      imagecount++;
  }    
  frame_iter = video_vec.begin(); 
  return 0;
}



int VideoFile_hdl::videoStep()
{
  
}

int VideoFile_hdl::clear()
{
  videoSize = cv::Size(0,0);
  imagecount=0;
  video_vec.clear();
  return 0;  
}

int VideoFile_hdl::addFrame(cv::Mat frame)
{
  video_vec.push_back(frame);
  imagecount++;
  return imagecount;
}

int VideoFile_hdl::getFrame(cv::Mat &frame)
{
  
  if (frame_iter != video_vec.end())
  {
    frame = *frame_iter;
    frame_iter++;
    return 0;
  }  
  return -1;
}

int VideoFile_hdl::get_size()
{
  return imagecount;
}