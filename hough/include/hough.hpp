#ifndef HOUGH_HPP_
#define HOUGH_HPP_

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"
#include "houghparams.hpp"

#ifndef M_PI 
#define M_PI    3.14159265358979323846f 
#endif

class Hough
{
private:
  HoughParams params;
public:
  Hough();
  ~Hough();  
  void setHoughParameters(bool newEnabledHoughBool, 
                          double newDpDbl, 
                          double newMinDistDbl, 
                          double newParam1Dbl, 
                          double newParam2Dbl, 
                          int newMinRadiusI, 
                          int newMaxRadiusI, 
                          double newPixelSizeDbl, 
                          bool newEnabledBlurBool, //needs checkbox
                          int newBlurKSizeI,    //needs checkbox
                          int newBlurSigmaI);   //needs checkbox
  void setHoughParameters(HoughParams new_params);

  void getHoughParameters(HoughParams &params);

  bool isEnable();
  int calcHoughCircleVector(const cv::Mat &src, std::vector<cv::Vec3f> &circles);
  int calcHoughPicture(const cv::Mat &src, cv::Mat &dst);
  int calcHoughPicture_CircleVector(const cv::Mat &src, cv::Mat &dst, std::vector<cv::Vec3f> &circles);
};


#endif // HOUGH_HPP_