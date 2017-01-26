#ifndef VIDEO_FILE_HDL_HPP
#define VIDEO_FILE_HDL_HPP

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"

class VideoFile_hdl{

  int imagecount;
  std::vector<cv::Mat>::iterator frame_iter;
  cv::Size videoSize;
  //std::string path;
  std::vector<cv::Mat> video_vec;

  bool videoLoadedBool;
public:
  VideoFile_hdl();
  VideoFile_hdl(cv::Size newVideoSize);
  ~VideoFile_hdl();
  int saveVideoRaw(std::string filename);
  int saveVideo(std::string filename);
  int loadVideo(std::string filename);
  int loadVideo(std::string filename,int num_frames);
  int loadVideoRaw(std::string filename);
  int clear();

  int addFrame(cv::Mat frame);
  int getFrame(cv::Mat &frame);
  int get_size();
  
  
  int videoStep();

};

#endif // VIDEO_FILE_HDL_HPP
