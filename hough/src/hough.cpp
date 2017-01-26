#include "hough.hpp"

using namespace cv;
using namespace std;

Hough::Hough()
{
  params.enabledHoughBool = true;
  params.enabledBlurBool  = true;
  params.dpDbl = 1;
  params.minDistDbl = 50;
  params.param1Dbl = 100;
  params.param2Dbl = 30;
  params.minRadiusI = 20;
  params.maxRadiusI = 50;
  params.pixelSizeDbl = 1;
  params.blurKSizeI    = 9;
  params.blurSigmaI    = 2;
}

Hough::~Hough()
{

}  

void Hough::setHoughParameters(bool newEnabledHoughBool, 
                                double newDpDbl, 
                                double newMinDistDbl, 
                                double newParam1Dbl, 
                                double newParam2Dbl, 
                                int newMinRadiusI, 
                                int newMaxRadiusI, 
                                double newPixelSizeDbl,
                                bool newEnabledBlurBool,
                                int newBlurKSizeI,
                                int newBlurSigmaI)
{
  params.enabledHoughBool  = newEnabledHoughBool;
  params.dpDbl        = newDpDbl;
  params.minDistDbl   = newMinDistDbl;
  params.param1Dbl    = newParam1Dbl;
  params.param2Dbl    = newParam2Dbl;
  params.minRadiusI   = newMinRadiusI;
  params.maxRadiusI   = newMaxRadiusI;
  params.pixelSizeDbl = newPixelSizeDbl;
  params.enabledBlurBool   = newEnabledBlurBool;
  params.blurKSizeI    = newBlurKSizeI;
  params.blurSigmaI    = newBlurSigmaI;
}


void Hough::setHoughParameters(HoughParams new_params)
{
  params = new_params;
}

void Hough::getHoughParameters(HoughParams &get_params)
{
  get_params = params;
}

bool Hough::isEnable()
{
  return params.enabledHoughBool;
}

int  Hough::calcHoughCircleVector(const cv::Mat &src, 
                            std::vector<cv::Vec3f> &circles)
{
  cv::Mat src_gray;
  cvtColor( src, src_gray, CV_BGR2GRAY );
  if(params.enabledBlurBool)
  {
    GaussianBlur( src_gray, src_gray, cv::Size(params.blurKSizeI, params.blurKSizeI), params.blurSigmaI, params.blurSigmaI );
  }
  //std::vector<cv::Vec3f> circles;
  HoughCircles(src_gray, circles, cv::HOUGH_GRADIENT, params.dpDbl, params.minDistDbl, params.param1Dbl, params.param2Dbl, params.minRadiusI, params.maxRadiusI);
  return 0;  
}

int Hough::calcHoughPicture(const cv::Mat &src, cv::Mat &dst)
{
  std::vector<cv::Vec3f> circles;
  return calcHoughPicture_CircleVector(src, dst, circles);
}

int Hough::calcHoughPicture_CircleVector(const cv::Mat &src, cv::Mat &dst, std::vector<cv::Vec3f> &circles)
{
  if(isEnable())
  {  
    dst = src.clone();
    calcHoughCircleVector(dst, circles);
    //printf("calcHoughPicture: found %d circles \n",circles.size());
    
    for( size_t i = 0; i < circles.size(); ++i )
    {
      Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
      int radius = cvRound(circles[i][2]);
      // circle center in green RGB(0,255,0)
      circle( dst, center, 3, Scalar(0,255,0), -1, 8, 0 );
      // circle outline in blue
      circle( dst, center, radius, Scalar(0,0,255), 3, 8, 0 );
  
    }
  }
  else
  dst = src;  
  return 0;
}
