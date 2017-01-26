#ifndef HOUGHPARAMWINDOW_H
#define HOUGHPARAMWINDOW_H

#include <QMainWindow>
#include "houghparams.hpp"


namespace Ui 
{
    class HoughParamWindow;
}


class HoughParamWindow : public QMainWindow 
{
    Q_OBJECT
public:
    HoughParamWindow(QWidget *parent = 0);
    HoughParamWindow(HoughParams params, QWidget *parent = 0);
   

    ~HoughParamWindow();

private:
    Ui::HoughParamWindow *ui;

private slots:
  void valueChangedEnabledHoughCircles(bool enabledHoughBool);
  void valueChangedDp(double newDpDbl);
  void valueChangedMinDist(double newMinDistDbl);
  void valueChangedParam1(double newParam1Dbl);
  void valueChangedParam2(double newParam2Dbl);
  void valueChangedMinRadius(int newMinRadiusI);
  void valueChangedMaxRadius(int newMaxRadiusI);
  void valueChangedPixelSize(double newPixelSizeDbl);
  void valueChangedEnabledBlur(bool enabledBlurBool);
  void valueChangedBlurKSize(int blurKSizeI);
  void valueChangedBlurSigma(int blurSigmaI);
public slots:
  void setValues(bool enabledHough, double dpDbl, double minDistDbl, double param1Dbl, double param2Dbl, int minRadiusI, int maxRadiusI, double pixelSizeDbl, bool enabledBlurBool, int blurKSizeI, int blurSigmaI);
  void setValues(HoughParams params);
signals:
  void emitValueChanged(bool enabledHough, double dpDbl, double minDistDbl, double param1Dbl, double param2Dbl, int minRadiusI, int maxRadiusI, double pixelSizeDbl, bool enabledBlurBool, int blurKSizeI, int blurSigmaI);
};

#endif // HOUGHPARAMWINDOW_H