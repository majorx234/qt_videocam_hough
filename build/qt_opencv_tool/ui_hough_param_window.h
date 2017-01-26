/********************************************************************************
** Form generated from reading UI file 'hough_param_window.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUGH_PARAM_WINDOW_H
#define UI_HOUGH_PARAM_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HoughParamWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *enableHoughCirclesCheckBox;
    QGroupBox *maxRadiusBox;
    QGridLayout *gridLayout_6;
    QSpinBox *maxRadiusSpinBox;
    QGroupBox *minRadiusBox;
    QGridLayout *gridLayout_7;
    QSpinBox *minRadiusSpinBox;
    QGroupBox *param2Box;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *param2DoubleSpinBox;
    QGroupBox *dpBox;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *dpDoubleSpinBox;
    QGroupBox *param1Box;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *param1DoubleSpinBox;
    QGroupBox *minDistBox;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *minDistDoubleSpinBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QDoubleSpinBox *pixelSizeDoubleSpinBox;
    QGroupBox *groupBox_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *enableBlurCheckBox;
    QGroupBox *blurKSizeBox;
    QGridLayout *gridLayout_10;
    QSpinBox *blurKSizeSpinBox;
    QGroupBox *blurSigmaBox;
    QGridLayout *gridLayout_9;
    QSpinBox *blurSigmaSpinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HoughParamWindow)
    {
        if (HoughParamWindow->objectName().isEmpty())
            HoughParamWindow->setObjectName(QStringLiteral("HoughParamWindow"));
        HoughParamWindow->resize(365, 614);
        centralwidget = new QWidget(HoughParamWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayoutWidget = new QWidget(groupBox_4);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 171, 527));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        enableHoughCirclesCheckBox = new QCheckBox(verticalLayoutWidget);
        enableHoughCirclesCheckBox->setObjectName(QStringLiteral("enableHoughCirclesCheckBox"));

        verticalLayout->addWidget(enableHoughCirclesCheckBox);

        maxRadiusBox = new QGroupBox(verticalLayoutWidget);
        maxRadiusBox->setObjectName(QStringLiteral("maxRadiusBox"));
        gridLayout_6 = new QGridLayout(maxRadiusBox);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        maxRadiusSpinBox = new QSpinBox(maxRadiusBox);
        maxRadiusSpinBox->setObjectName(QStringLiteral("maxRadiusSpinBox"));
        maxRadiusSpinBox->setMaximum(10000);

        gridLayout_6->addWidget(maxRadiusSpinBox, 0, 0, 1, 1);


        verticalLayout->addWidget(maxRadiusBox);

        minRadiusBox = new QGroupBox(verticalLayoutWidget);
        minRadiusBox->setObjectName(QStringLiteral("minRadiusBox"));
        gridLayout_7 = new QGridLayout(minRadiusBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        minRadiusSpinBox = new QSpinBox(minRadiusBox);
        minRadiusSpinBox->setObjectName(QStringLiteral("minRadiusSpinBox"));
        minRadiusSpinBox->setMaximum(10000);

        gridLayout_7->addWidget(minRadiusSpinBox, 0, 0, 1, 1);


        verticalLayout->addWidget(minRadiusBox);

        param2Box = new QGroupBox(verticalLayoutWidget);
        param2Box->setObjectName(QStringLiteral("param2Box"));
        gridLayout_4 = new QGridLayout(param2Box);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        param2DoubleSpinBox = new QDoubleSpinBox(param2Box);
        param2DoubleSpinBox->setObjectName(QStringLiteral("param2DoubleSpinBox"));
        param2DoubleSpinBox->setMaximum(100000);

        gridLayout_4->addWidget(param2DoubleSpinBox, 0, 0, 1, 1);


        verticalLayout->addWidget(param2Box);

        dpBox = new QGroupBox(verticalLayoutWidget);
        dpBox->setObjectName(QStringLiteral("dpBox"));
        gridLayout_2 = new QGridLayout(dpBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        dpDoubleSpinBox = new QDoubleSpinBox(dpBox);
        dpDoubleSpinBox->setObjectName(QStringLiteral("dpDoubleSpinBox"));
        dpDoubleSpinBox->setMaximum(100000);

        gridLayout_2->addWidget(dpDoubleSpinBox, 0, 0, 1, 1);


        verticalLayout->addWidget(dpBox);

        param1Box = new QGroupBox(verticalLayoutWidget);
        param1Box->setObjectName(QStringLiteral("param1Box"));
        gridLayout_5 = new QGridLayout(param1Box);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        param1DoubleSpinBox = new QDoubleSpinBox(param1Box);
        param1DoubleSpinBox->setObjectName(QStringLiteral("param1DoubleSpinBox"));
        param1DoubleSpinBox->setMaximum(100000);

        gridLayout_5->addWidget(param1DoubleSpinBox, 0, 0, 1, 1);


        verticalLayout->addWidget(param1Box);

        minDistBox = new QGroupBox(verticalLayoutWidget);
        minDistBox->setObjectName(QStringLiteral("minDistBox"));
        gridLayout_3 = new QGridLayout(minDistBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        minDistDoubleSpinBox = new QDoubleSpinBox(minDistBox);
        minDistDoubleSpinBox->setObjectName(QStringLiteral("minDistDoubleSpinBox"));
        minDistDoubleSpinBox->setMaximum(100000);

        gridLayout_3->addWidget(minDistDoubleSpinBox, 0, 0, 1, 1);


        verticalLayout->addWidget(minDistBox);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        pixelSizeDoubleSpinBox = new QDoubleSpinBox(groupBox);
        pixelSizeDoubleSpinBox->setObjectName(QStringLiteral("pixelSizeDoubleSpinBox"));
        pixelSizeDoubleSpinBox->setMaximum(9.999e+7);
        pixelSizeDoubleSpinBox->setValue(1);

        gridLayout_8->addWidget(pixelSizeDoubleSpinBox, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        enableHoughCirclesCheckBox->raise();
        verticalLayoutWidget->raise();

        gridLayout->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayoutWidget_2 = new QWidget(groupBox_5);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(-1, 20, 171, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        enableBlurCheckBox = new QCheckBox(verticalLayoutWidget_2);
        enableBlurCheckBox->setObjectName(QStringLiteral("enableBlurCheckBox"));

        verticalLayout_2->addWidget(enableBlurCheckBox);

        blurKSizeBox = new QGroupBox(verticalLayoutWidget_2);
        blurKSizeBox->setObjectName(QStringLiteral("blurKSizeBox"));
        gridLayout_10 = new QGridLayout(blurKSizeBox);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        blurKSizeSpinBox = new QSpinBox(blurKSizeBox);
        blurKSizeSpinBox->setObjectName(QStringLiteral("blurKSizeSpinBox"));

        gridLayout_10->addWidget(blurKSizeSpinBox, 0, 0, 1, 1);


        verticalLayout_2->addWidget(blurKSizeBox);

        blurSigmaBox = new QGroupBox(verticalLayoutWidget_2);
        blurSigmaBox->setObjectName(QStringLiteral("blurSigmaBox"));
        gridLayout_9 = new QGridLayout(blurSigmaBox);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        blurSigmaSpinBox = new QSpinBox(blurSigmaBox);
        blurSigmaSpinBox->setObjectName(QStringLiteral("blurSigmaSpinBox"));

        gridLayout_9->addWidget(blurSigmaSpinBox, 0, 0, 1, 1);


        verticalLayout_2->addWidget(blurSigmaBox);


        gridLayout->addWidget(groupBox_5, 0, 1, 1, 1);

        HoughParamWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HoughParamWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 365, 20));
        HoughParamWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HoughParamWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HoughParamWindow->setStatusBar(statusbar);

        retranslateUi(HoughParamWindow);

        QMetaObject::connectSlotsByName(HoughParamWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HoughParamWindow)
    {
        HoughParamWindow->setWindowTitle(QApplication::translate("HoughParamWindow", "Hough Parameter", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("HoughParamWindow", "Hough", Q_NULLPTR));
        enableHoughCirclesCheckBox->setText(QApplication::translate("HoughParamWindow", "enable Hough Circles", Q_NULLPTR));
        maxRadiusBox->setTitle(QApplication::translate("HoughParamWindow", "maxRadius", Q_NULLPTR));
        minRadiusBox->setTitle(QApplication::translate("HoughParamWindow", "minRadius", Q_NULLPTR));
        param2Box->setTitle(QApplication::translate("HoughParamWindow", "param2", Q_NULLPTR));
        dpBox->setTitle(QApplication::translate("HoughParamWindow", "dp", Q_NULLPTR));
        param1Box->setTitle(QApplication::translate("HoughParamWindow", "param1", Q_NULLPTR));
        minDistBox->setTitle(QApplication::translate("HoughParamWindow", "minDist", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("HoughParamWindow", "pixel size (mm)", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("HoughParamWindow", "Blur", Q_NULLPTR));
        enableBlurCheckBox->setText(QApplication::translate("HoughParamWindow", "enable Blur", Q_NULLPTR));
        blurKSizeBox->setTitle(QApplication::translate("HoughParamWindow", "BlurKSize", Q_NULLPTR));
        blurSigmaBox->setTitle(QApplication::translate("HoughParamWindow", "BlurSigma", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HoughParamWindow: public Ui_HoughParamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUGH_PARAM_WINDOW_H
