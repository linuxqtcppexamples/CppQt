﻿#include <QCoreApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread mThread1;
    mThread1.setObjectName("mThread1");

    MyThread mThread2;
    mThread2.setObjectName("mThread2");

    MyThread mThread3;
    mThread3.setObjectName("mThread3");

    mThread1.start(QThread::HighestPriority);
   // mThread2.start();
    //mThread3.start(QThread::LowestPriority);

    mThread1.setStop(true);

    return a.exec();
}
