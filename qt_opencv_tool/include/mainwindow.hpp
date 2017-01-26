#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QPainter>
#include <QGraphicsScene>
#include <QTimer>
#include "hough_param_window.hpp"
#include "hough.hpp"
#include "video_cam.hpp"
//#include "video_file.hpp" // obsolete
#include "video_file_hdl.hpp"
#include <thread>


namespace Ui 
{
  class MainWindow;
}


class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = Q_NULLPTR);
  ~MainWindow();

private:
  std::atomic<int> changeCam_event;
  Hough hough_trans;
  std::vector<VideoCam> cams; 
  std::vector<VideoCamAttribute> list_of_cams;
  int current_cam; 
  int last_cam;
  int resolution_step;
  HoughParamWindow *houghParameterWindow;
  
  Ui::MainWindow *ui;
  
  QGraphicsScene* scene;
  QTimer *timerQ;

  QIcon rec_icon;
  QIcon rec_stop_icon;

  bool threadRunning;
  std::thread c0;

  bool recordVideoBool;
  VideoFile_hdl* videoFileHdl;

  int widthQtI, heightQtI;
  char l_str[50];
  void startAcquisition();
  void addCams();
  int changeCam();
  int changeResolution(int index);
  void recordVideo();
  void stopRecordVideo();
  void save_video();
  int create_videoFileHdl();
private slots:
  void setHoughParametersSlot(bool newEnabledBool, double newDpDbl, double newMinDistDbl, double newParam1Dbl, double newParam2Dbl, int newMinRadiusI, int newMaxRadiusI, double newPixelSizeDbl, bool newEnabledBlurBool, int newBlurKSizeI, int newBlurSigmaI);
  void startAcquisitionSlot();
  void stopAcquisitionSlot();  
  void showHoughParametersSlot();
  void timerSlot();
  void changeCamSlot();
  void changeResolutionSlot(int index);

  void recordButtonn_pressedSlot();
  void saveVideoButton_pressedSlot();


};

#endif // MAINWINDOW_HPP
