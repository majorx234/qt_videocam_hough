#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <iostream>
#include <QPixmap>
#include "cvmat2qimage.hpp"
#include "timemeasurement.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), current_cam(0),last_cam(-2),resolution_step(0), hough_trans(), changeCam_event(0), rec_icon(QString(":/record.png")), rec_stop_icon(QString(":/record_stop.png")), recordVideoBool(0), videoFileHdl(NULL)
{
  ui->setupUi(this);
  addCams();
  if(cams.size()>0)
    if( cams[current_cam].init() == 0)
    {
      ui->messageTextBrowser->append("Cam initialized");
      last_cam = current_cam;
      changeResolution(0);
    }  
  
  threadRunning = false;
  scene = new QGraphicsScene();
  ui->graphicsView->setScene(scene);

  //if(rec_icon.pixmap(QSize(128,128)).isNull())

  ui->recordVideoButton->setIcon(rec_icon);
  timerQ = new QTimer();
  timerQ->start(16);


  // inital Values for Hough transformation
  HoughParams params;
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
  hough_trans.setHoughParameters(params);
  houghParameterWindow = new HoughParamWindow(params, this);

  houghParameterWindow->show();

  connect(ui->startBtn, SIGNAL(clicked()), this, SLOT(startAcquisitionSlot()));
  connect(ui->stopBtn, SIGNAL(clicked()), this, SLOT(stopAcquisitionSlot()));
  connect(ui->stopBtn, SIGNAL(clicked()), this, SLOT(stopAcquisitionSlot()));
  connect(ui->changeCamBtn, SIGNAL(clicked()), this, SLOT(changeCamSlot()));
  connect(ui->resolutionCmbBx, SIGNAL(activated(int)), this, SLOT(changeResolutionSlot(int)));
  connect(ui->recordVideoButton, SIGNAL(clicked()), this, SLOT(recordButtonn_pressedSlot()));
  connect(ui->saveVideoButton, SIGNAL(clicked()), this, SLOT(saveVideoButton_pressedSlot()));
  connect(ui->houghParametersBtn, SIGNAL(clicked()), this, SLOT(showHoughParametersSlot()));
  connect(houghParameterWindow, SIGNAL(emitValueChanged(bool, double, double, double, double, int, int, double, bool, int ,int)), this, SLOT(setHoughParametersSlot(bool, double, double, double, double, int, int, double, bool ,int ,int )));
  connect(timerQ, SIGNAL(timeout()), this, SLOT(timerSlot()));

  //StartAcquisitionSlot();
}


MainWindow::~MainWindow()
{
  delete ui;
  delete scene;
  delete timerQ;
  delete houghParameterWindow;
  if(videoFileHdl)
    delete videoFileHdl;
 // if (threadRunning)
 //   c0.join();
}

void MainWindow::setHoughParametersSlot(bool newEnabledBool, double newDpDbl, double newMinDistDbl, double newParam1Dbl, double newParam2Dbl, int newMinRadiusI, int newMaxRadiusI, double newPixelSizeDbl, bool newEnabledBlurBool, int newBlurKSizeI, int newBlurSigmaI)
{
  hough_trans.setHoughParameters( newEnabledBool, 
                                  newDpDbl, 
                                  newMinDistDbl, 
                                  newParam1Dbl, 
                                  newParam2Dbl,
                                  newMinRadiusI, 
                                  newMaxRadiusI,
                                  newPixelSizeDbl,
                                  newEnabledBlurBool,
                                  newBlurKSizeI, 
                                  newBlurSigmaI);
}

void MainWindow::timerSlot()
{
  Timemeasurement time_obj;
  try{
    int video_frame_count = 0;
    if (threadRunning & !changeCam_event)
    {
      scene->clear();

      //if(hough_trans.isEnable())
      //{
        QImage tmp_image;
        cv::Mat src, dst;
        std::vector<cv::Vec3f> circles;
        if( current_cam >= 0 )
          cams[current_cam].getFrame(src);
        else
          cams.back().getFrame(src);

        //get info for Type
        //int img_type_info = src.type();
        //std::string img_type_info_str = type2str(img_type_info);
        // info of video image type
        //ui->messageTextBrowser->append(QString("Cam_img-Info: %1 typeid: %2\n").arg(QString::fromStdString(img_type_info_str)).arg(img_type_info));
        
        time_obj.start_time();
        hough_trans.calcHoughPicture_CircleVector(src, dst, circles);
        time_obj.stop_time();
        if(recordVideoBool)
        {
          video_frame_count = videoFileHdl->addFrame(dst);
          ui->messageTextBrowser->append(QString("recorded %1 frames \n").arg(video_frame_count));
        }
        // fallunterscheiudung enable hough circles hier her
        tmp_image = cvmat2qimage( dst );
        QPixmap pixmap( QPixmap::fromImage(tmp_image));
        ui->messageTextBrowser->append(QString("time:%1 \n").arg(time_obj.get_microsec_time()));
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
      //}

    }
  }  
  catch(...)
  {
  }
}

void MainWindow::startAcquisition()
{
}
void MainWindow::startAcquisitionSlot()
{
  if (!threadRunning)
  {
    //std::thread t0(&MainWindow::startAcquisition, this);
    //c0 = std::move(t0);
    threadRunning = true;
  }
}

void MainWindow::stopAcquisitionSlot()
{
  //if (threadRunning)
  //  c0.join();
  threadRunning = false;
}

void MainWindow::showHoughParametersSlot()
{ 
  houghParameterWindow->show();
}



void MainWindow::addCams(){
  int cam_count = 0;
  int max_cams = 5;
  
  cam_count = VideoCam::videocam_searcher(max_cams, list_of_cams);
  
  for(int i=0;i<cam_count;i++)
  {
    VideoCam default_cam(i);
    cams.push_back(default_cam);
  }
  VideoCam file_videocam; //lastcam is always a file cam
  cams.push_back(file_videocam);

  ui->messageTextBrowser->append(QString("number of cams: %1 \n").arg(cam_count));
  /*if(GigECam){
     ui->camIdSpnBx->setSpecialValueText(tr("GigE"));
     ui->camIdSpnBx->setRange(-1, cam_count-1);
   }*/
  ui->camIdSpnBx->setRange(-1, cam_count-1);
  ui->camIdSpnBx->setSpecialValueText(tr("Videofile"));
  ui->camIdSpnBx->setSingleStep(1);

  current_cam = 0;
  if(!list_of_cams[current_cam].avaible)
    current_cam = 1;
  ui->camIdSpnBx->setValue(current_cam);
}

void MainWindow::changeCamSlot()
{
  changeCam();
}


int MainWindow::changeCam()
{
  
  int error = 0;
  current_cam = ui->camIdSpnBx->value();

  ui->messageTextBrowser->append("change Cam ");
  ui->messageTextBrowser->append(QString("old Cam index: %1 \n").arg(last_cam));
  ui->messageTextBrowser->append(QString("new Cam index: %1 \n").arg(current_cam));
  if((current_cam!=-1)&&(current_cam == last_cam))
  {
    return 0;
  }  
  if(current_cam >= 0)
  {  
    if(!list_of_cams[current_cam].avaible)
    {
      ui->messageTextBrowser->append("Cam not available!");
      current_cam = last_cam;
      ui->camIdSpnBx->setValue(current_cam);
    }
  }  
  changeCam_event=1; 
  
  if(last_cam != -2) //if last_cam not there because program is just
  {
    ui->messageTextBrowser->append(QString("closed last_cam: %1 \n").arg(last_cam));
    cams[last_cam].close();

  }
  if(current_cam==-1) //-1 means open File
  {
    QString filters("Video files (*.avi);;All files (*.*)");
    QString defaultFilter("Video files (*.avi)");
    QString path_to_videofile = QFileDialog:: getOpenFileName( Q_NULLPTR,
                                                        "Open file", 
                                                        QDir::currentPath(),
                                                        filters, &defaultFilter);
    if(path_to_videofile.isEmpty())
    {
      current_cam = last_cam;
      ui->messageTextBrowser->append("No video file switch back to last cam");
      changeCam_event = 0;
      return -1;
    }
    std::string new_file_path = path_to_videofile.toUtf8().constData();
    cams.back().init(new_file_path);
    last_cam = current_cam;  
  }
  else
  {   //current_cam is >= than 0
    error =  cams[current_cam].init();
    if( error == 0){
      ui->messageTextBrowser->append("Cam initialized");
      int resolution_index = ui->resolutionCmbBx->currentIndex();
      changeResolution(resolution_index);
      last_cam = current_cam;
    }
    else
    {
      ui->messageTextBrowser->append("Cam error");
    }
  }  
  changeCam_event=0;
  return error;
}

void MainWindow::changeResolutionSlot(int index)
{

  switch(index){
    case 0: resolution_step = changeResolution(0);
            break;
    case 1: resolution_step = changeResolution(1);
            break;
    case 2: resolution_step = changeResolution(2);
            break;
    default:resolution_step = changeResolution(0);
            break;        
  }

}

int MainWindow::changeResolution(int index)
{
  int width, height, awidth ,aheight;
  bool resolution_changed = false;
  ui->messageTextBrowser->append(QString("Cam resolution index: %1 \n").arg(index));
  
  int current_cam_local = current_cam;

  if(current_cam == -1 )
    current_cam_local = cams.size()-1; //filecam
  
  switch(index){
    case 2: width = 1920;
            height = 1080;
            awidth = 0;
            aheight = 0;
            cams[current_cam_local].setResolution(width, height, awidth, aheight);
            if((width==awidth)&&(height==aheight)){
              resolution_step = 2;
              break;
            }
            resolution_changed = true;  
            
    case 1: width = 1280;
            height = 720;
            awidth = 0;
            aheight = 0;
            cams[current_cam_local].setResolution(width, height, awidth, aheight);
            if((width==awidth)&&(height==aheight)){
              resolution_step = 1;
              if(resolution_changed==true)
                ui->resolutionCmbBx->setCurrentIndex(1);
              break;
            }
            resolution_changed = true;
    case 0: width = 640;
            height = 480;
            awidth = 0;
            aheight = 0;
            cams[current_cam_local].setResolution(width, height, awidth, aheight);
            if((width==awidth)&&(height==aheight)){
              resolution_step = 0;
              if(resolution_changed==true)
                ui->resolutionCmbBx->setCurrentIndex(1);
              break;
            }
            resolution_changed = true;
            break;
    default:width = 640;
            height = 480;
            awidth = 0;
            aheight = 0;
            cams[current_cam_local].setResolution(width, height, awidth, aheight);
            if((width==awidth)&&(height==aheight)){
              resolution_step = 0;
              if(resolution_changed==true)
                ui->resolutionCmbBx->setCurrentIndex(0);
              break;
            }
            resolution_changed = true;
            ui->messageTextBrowser->append("changeResolution: something went totally wrong!!");     
  }
  create_videoFileHdl();
}

void MainWindow::recordButtonn_pressedSlot(){
  if(recordVideoBool)
  {
    stopRecordVideo();
  }
  else  
  {
    recordVideo();
  }
}

void MainWindow::saveVideoButton_pressedSlot(){
  ui->messageTextBrowser->append("save video button pressed");
  save_video();
}

void MainWindow::recordVideo(){
  if( videoFileHdl){
    ui->recordVideoButton->setIcon(rec_stop_icon);
    ui->messageTextBrowser->append("record started"); 
    recordVideoBool=true;
  }
  else
  {
    ui->messageTextBrowser->append("no videoFileHdl");
  }
      
}

void MainWindow::stopRecordVideo()
{
    ui->recordVideoButton->setIcon(rec_icon);
    ui->messageTextBrowser->append("record stoped"); 
    recordVideoBool=false;
}

void MainWindow::save_video(){
  if(!recordVideoBool && videoFileHdl) //needs update, for first use not simultaniosly recording and saving
  {
    QString filters("Video files (*.avi);;All files (*.*)");
    QString defaultFilter("Video files (*.avi)");
    QString path_to_videofile = QFileDialog::getSaveFileName( Q_NULLPTR,
                                                        "Save file", 
                                                        QDir::currentPath(),
                                                        filters, &defaultFilter);
    printf("here2\n");
    std::string filename = path_to_videofile.toUtf8().constData();
    int error = videoFileHdl->saveVideo(filename);  
    if( error )
       ui->messageTextBrowser->append(QString("video file couldn't not saved! error: %1\n").arg(error));

  }
}

int MainWindow::create_videoFileHdl()
{
  if(videoFileHdl)
    delete videoFileHdl;
  CvSize frame_size;
  switch(resolution_step){
    case 2:
      frame_size = CvSize(1920,1080);
      break;
    case 1:
      frame_size = CvSize(1280,720);
      break;
    case 0:
      frame_size = CvSize(640,480);
      break;
    default:
      ui->messageTextBrowser->append("error wiith resolution of Videofile-Handler");

      stopRecordVideo();
      return -1;
      break;  
      
  }

  videoFileHdl = new VideoFile_hdl(frame_size);
  return 0;
}
