#include "mainwindow.hpp"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
  try
  {
  QApplication a(argc, argv);
  MainWindow w;
  //w.show();
  w.showMaximized();
  return a.exec();
  }
  catch(...)
  {
    std::cout << "there went something terribly wrong" << std::endl;
    return -1;
  }
}