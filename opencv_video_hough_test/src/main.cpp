#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"
#include <iostream>

#include "video_cam.hpp"
#include "hough.hpp"

int main(int argc, char* argv[])
{
    VideoCam cam(0);
    cam.init();
    //cam.start_window_app();
    cv::namedWindow("MyHough_Video",CV_WINDOW_AUTOSIZE); //create a window called "MyVideo"

    while (1)
    {
      cv::Mat src_frame, dst_frame;
      cam.getFrame(src_frame);

      Hough hough_trans;
      //std::vector<cv::Vec3f> circles;
      hough_trans.calcHoughPicture(src_frame, dst_frame);
      //cvtColor(src_frame, dst_frame, COLOR_BGR2GRAY);
      cv::imshow("MyHough_Video", dst_frame); //show the frame in "MyHough_Video" window
      if (cv::waitKey(30) == 27) //wait for 'esc' key press for 30ms. If 'esc' key is pressed, break loop
      {
        std::cout << "esc key is pressed by user" << std::endl;
        break; 
      }
    }
    return 0;
}
