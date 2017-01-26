#ifndef CVMAT2QIMAGE_HPP
#define CVMAT2QIMAGE_HPP

#include <QImage>
#include <opencv2/core/core.hpp>
#include <string>

cv::Mat qimage2cvmat( const QImage &inImage);
QImage  cvmat2qimage( const cv::Mat &inMat );
std::string type2str(int type);

#endif // QT_OPENCV_CONV_HPP