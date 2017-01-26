#include "timemeasurement.h"
#include "hough.hpp"
#include "video_cam.hpp"
#include "opencv2/opencv.hpp"
//#include "video_file.hpp" // obsolete
#include "video_file_hdl.hpp"

int main(int argc, char *argv[])
{
  try
  {
    Timemeasurement time_obj;
    long int mic_sec;
    long int sum_mic_sec;

    cv::Mat src, dst;
    std::vector<cv::Vec3f> circles;
    
    Hough hough_trans;

    VideoFile_hdl cap;

    int max_frames = 100;  //max frames if file is very big

    // printf("path: %s\n", argv[1]);
    if (cap.loadVideo(std::string(argv[1]), max_frames))
    { 
      printf("video not loadable\n");
      return -1;
    }  

    int num_frames = cap.get_size();
    // printf("videosize: num_frames: %d\n",num_frames);

    int num_circles = 0;

    sum_mic_sec = 0;
    for(int i=0;i<num_frames-1;i++)
    {
      if (cap.getFrame(src))
      {             
        printf("no more frames: i:%d\n",i);
        break;
      }        

      time_obj.start_time();
      hough_trans.calcHoughPicture_CircleVector(src, dst, circles);
      time_obj.stop_time();

      
      mic_sec = time_obj.get_microsec_time();
      sum_mic_sec += mic_sec;
      // num_circles += circles.size();
    }  
    printf("%d \n", sum_mic_sec);

  }
  catch(...)
  {
    //std::cout << "there went something terribly wrong" << std::endl;
    return -3;
  }
}
