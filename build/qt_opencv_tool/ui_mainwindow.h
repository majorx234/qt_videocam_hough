/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *centralWidgetLayout;
    QGraphicsView *graphicsView;
    QPushButton *changeCamBtn;
    QPushButton *startBtn;
    QTextBrowser *messageTextBrowser;
    QPushButton *stopBtn;
    QSpinBox *camIdSpnBx;
    QPushButton *houghParametersBtn;
    QPushButton *saveVideoButton;
    QComboBox *resolutionCmbBx;
    QPushButton *recordVideoButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(469, 484);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        centralWidgetLayout = new QGridLayout();
        centralWidgetLayout->setSpacing(0);
        centralWidgetLayout->setObjectName(QStringLiteral("centralWidgetLayout"));
        centralWidgetLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        centralWidgetLayout->addWidget(graphicsView, 0, 0, 1, 2);

        changeCamBtn = new QPushButton(centralWidget);
        changeCamBtn->setObjectName(QStringLiteral("changeCamBtn"));

        centralWidgetLayout->addWidget(changeCamBtn, 1, 1, 1, 1);

        startBtn = new QPushButton(centralWidget);
        startBtn->setObjectName(QStringLiteral("startBtn"));

        centralWidgetLayout->addWidget(startBtn, 4, 1, 1, 1);

        messageTextBrowser = new QTextBrowser(centralWidget);
        messageTextBrowser->setObjectName(QStringLiteral("messageTextBrowser"));
        messageTextBrowser->setMaximumSize(QSize(16777215, 16777215));

        centralWidgetLayout->addWidget(messageTextBrowser, 1, 0, 8, 1);

        stopBtn = new QPushButton(centralWidget);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        centralWidgetLayout->addWidget(stopBtn, 5, 1, 1, 1);

        camIdSpnBx = new QSpinBox(centralWidget);
        camIdSpnBx->setObjectName(QStringLiteral("camIdSpnBx"));
        camIdSpnBx->setMinimum(-1);

        centralWidgetLayout->addWidget(camIdSpnBx, 2, 1, 1, 1);

        houghParametersBtn = new QPushButton(centralWidget);
        houghParametersBtn->setObjectName(QStringLiteral("houghParametersBtn"));

        centralWidgetLayout->addWidget(houghParametersBtn, 8, 1, 1, 1);

        saveVideoButton = new QPushButton(centralWidget);
        saveVideoButton->setObjectName(QStringLiteral("saveVideoButton"));

        centralWidgetLayout->addWidget(saveVideoButton, 7, 1, 1, 1);

        resolutionCmbBx = new QComboBox(centralWidget);
        resolutionCmbBx->setObjectName(QStringLiteral("resolutionCmbBx"));

        centralWidgetLayout->addWidget(resolutionCmbBx, 3, 1, 1, 1);

        recordVideoButton = new QPushButton(centralWidget);
        recordVideoButton->setObjectName(QStringLiteral("recordVideoButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recordVideoButton->sizePolicy().hasHeightForWidth());
        recordVideoButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../.designer/icons/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("../../../../../.designer/icons/record_stop.png"), QSize(), QIcon::Normal, QIcon::On);
        recordVideoButton->setIcon(icon);

        centralWidgetLayout->addWidget(recordVideoButton, 6, 1, 1, 1);


        gridLayout_2->addLayout(centralWidgetLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 469, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        changeCamBtn->setText(QApplication::translate("MainWindow", "change cam", Q_NULLPTR));
        startBtn->setText(QApplication::translate("MainWindow", "start", Q_NULLPTR));
        stopBtn->setText(QApplication::translate("MainWindow", "stop", Q_NULLPTR));
        houghParametersBtn->setText(QApplication::translate("MainWindow", "HoughParameters", Q_NULLPTR));
        saveVideoButton->setText(QApplication::translate("MainWindow", "save video as", Q_NULLPTR));
        resolutionCmbBx->clear();
        resolutionCmbBx->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "640 x 480", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1280 x 720", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1920 x 1080", Q_NULLPTR)
        );
        recordVideoButton->setText(QApplication::translate("MainWindow", "record video", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
