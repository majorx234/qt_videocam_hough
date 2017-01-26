#include "hough_param_window.hpp"
#include "ui_hough_param_window.h"

HoughParamWindow::HoughParamWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::HoughParamWindow)
{
  ui->setupUi(this);
  connect(ui->enableHoughCirclesCheckBox, SIGNAL(toggled(bool)), this, SLOT(valueChangedEnabledHoughCircles(bool)));
  connect(ui->dpDoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(valueChangedDp(double)));
  connect(ui->minDistDoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(valueChangedMinDist(double)));
  connect(ui->param1DoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(valueChangedParam1(double)));
  connect(ui->param2DoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(valueChangedParam2(double)));
  connect(ui->minRadiusSpinBox, SIGNAL(valueChanged(int)), this, SLOT(valueChangedMinRadius(int)));
  connect(ui->maxRadiusSpinBox, SIGNAL(valueChanged(int)), this, SLOT(valueChangedMaxRadius(int)));
  connect(ui->pixelSizeDoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(valueChangedPixelSize(double)));
  connect(ui->enableBlurCheckBox, SIGNAL(toggled(bool)), this, SLOT(valueChangedEnabledBlur(bool)));
  connect(ui->blurKSizeSpinBox, SIGNAL(valueChanged(int)), this, SLOT(valueChangedBlurKSize(int)));
  connect(ui->blurSigmaSpinBox, SIGNAL(valueChanged(int)), this, SLOT(valueChangedBlurSigma(int)));
}

HoughParamWindow::HoughParamWindow(HoughParams params, QWidget *parent) : HoughParamWindow(parent)
{
  setValues(params);
}   


HoughParamWindow::~HoughParamWindow()
{
  delete ui;
}

void HoughParamWindow::setValues(bool enabledHoughBool, double dpDbl, double minDistDbl, double param1Dbl, double param2Dbl, int minRadiusI, int maxRadiusI, double pixelSizeDbl,  bool enabledBlurBool, int blurKSizeI, int blurSigmaI)
{
  ui->enableHoughCirclesCheckBox->setChecked(enabledHoughBool);
  ui->dpDoubleSpinBox->setValue(dpDbl);
  ui->minDistDoubleSpinBox->setValue(minDistDbl);
  ui->param1DoubleSpinBox->setValue(param1Dbl);
  ui->param2DoubleSpinBox->setValue(param2Dbl);
  ui->minRadiusSpinBox->setValue(minRadiusI);
  ui->maxRadiusSpinBox->setValue(maxRadiusI);
  ui->pixelSizeDoubleSpinBox->setValue(pixelSizeDbl);
  ui->enableBlurCheckBox->setChecked(enabledBlurBool);
  ui->blurKSizeSpinBox->setValue(blurKSizeI);
  ui->blurSigmaSpinBox->setValue(blurSigmaI);
  emit emitValueChanged(enabledHoughBool, dpDbl, minDistDbl, param1Dbl, param2Dbl, minRadiusI, maxRadiusI, pixelSizeDbl, enabledBlurBool, blurKSizeI, blurSigmaI);
}
void HoughParamWindow::setValues(HoughParams params)
{
  setValues(params.enabledHoughBool,
            params.dpDbl,       
            params.minDistDbl,  
            params.param1Dbl,   
            params.param2Dbl,   
            params.minRadiusI,  
            params.maxRadiusI,  
            params.pixelSizeDbl,
            params.enabledBlurBool,  
            params.blurKSizeI,   
            params.blurSigmaI);
}

void HoughParamWindow::valueChangedEnabledHoughCircles(bool enabledHoughBool)
{
  setValues(enabledHoughBool, ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), 
    ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedDp(double newDpDbl)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), newDpDbl, ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedMinDist(double newMinDistDbl)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), newMinDistDbl, 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedParam1(double newParam1Dbl)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    newParam1Dbl, ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedParam2(double newParam2Dbl)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), newParam2Dbl, ui->minRadiusSpinBox->value(), ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedMinRadius(int newMinRadiusI)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), newMinRadiusI, ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedMaxRadius(int newMaxRadiusI)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), newMaxRadiusI, ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedPixelSize(double newPixelSizeDbl)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), ui->maxRadiusSpinBox->value(), newPixelSizeDbl, ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedEnabledBlur(bool newEnabledBlurBool)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), newEnabledBlurBool,
    ui->blurKSizeSpinBox->value(), ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedBlurKSize(int newBlurKSizeI)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    newBlurKSizeI, ui->blurSigmaSpinBox->value());
}

void HoughParamWindow::valueChangedBlurSigma(int newBlurSigmaI)
{
  setValues(ui->enableHoughCirclesCheckBox->isChecked(), ui->dpDoubleSpinBox->value(), ui->minDistDoubleSpinBox->value(), 
    ui->param1DoubleSpinBox->value(), ui->param2DoubleSpinBox->value(), ui->minRadiusSpinBox->value(), ui->maxRadiusSpinBox->value(), ui->pixelSizeDoubleSpinBox->value(), ui->enableBlurCheckBox->isChecked(),
    ui->blurKSizeSpinBox->value(), newBlurSigmaI);
}