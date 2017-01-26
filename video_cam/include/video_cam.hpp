#ifndef VIDEO_CAM_HPP_
#define VIDEO_CAM_HPP_

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"
#include <string>

//#include
struct VideoCamAttribute
{
  int id;
  bool avaible;
  
  int min_width;
  int min_height;
  int max_width;
  int max_height;
};

class VideoCam{
private:  
  int id;
  cv::VideoCapture* cap;
  bool bSuccess;
  bool isfile;
  std::string file_path;

  double dWidth; 
  double dHeight; 
  int fps;
public:
  VideoCam();
  VideoCam(int dev);
  VideoCam(std::string path);
  ~VideoCam();
  int init();
  int init(std::string new_file_path);
  int get(int value);
  int close();
  int getFrame(cv::Mat &frame);
  int setResolution(int width, int height, int &awidth, int &aheight);
  int start_window_app();
  static int videocam_searcher(int max_cams, std::vector<VideoCamAttribute> &list_of_cams);
};

#endif //VIDEO_CAM_HPP_
