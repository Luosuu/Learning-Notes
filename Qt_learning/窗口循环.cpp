#include "mainwindow_first.h"
#include <QMessageBox>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <QMouseEvent>
#include <QPushButton>
#include <QSize>
#include <QSizePolicy>
MainWindow_First::MainWindow_First(QWidget *parent)
    : QMainWindow(parent)
{
    QSize size2(100,200);
    QSize size(400,300);
    QSize size3(200,200);

    QMainWindow *talk = new QMainWindow;
    QMessageBox *NpcTalk = new QMessageBox;
    NpcTalk->setParent(this);
    NpcTalk->setText("学习，才能见到露娜");
    //NpcTalk->setSizePolicy();
    QPushButton *img = new QPushButton;
    QPushButton *img2 = new QPushButton;
    QPushButton *quit_logo = new QPushButton;

    //talk的返回按钮
    quit_logo->setParent(talk);
    connect(quit_logo,&QPushButton::clicked,talk,&QMainWindow::close);
    connect(quit_logo,&QPushButton::clicked,this,&QMainWindow::show);
    quit_logo->setFixedSize(size3);



    img2->setFixedSize(size2);
    img->setFixedSize(size);
    quit_logo->move(500,500);


    QPixmap p1("/Users/zhongtianle/Downloads/06  qt/04-Day14_C++_QT/04-Day14_C++_QT/04-Day14_C++_QT/Doc/Qt5 模块.png");
    QPixmap *p2 = new QPixmap("/Users/zhongtianle/Desktop/A0E2E74DE8A1ACDFBB90FD6001B44C1C.jpg");//luna
    QPixmap *p3 = new QPixmap("/Users/zhongtianle/Desktop/73C79795B6D8DBB04011178393222DE1.jpg");//sq
    img->setFlat(true);
    img2->setFlat(true);
    quit_logo->setFlat(true);
    img2->setParent(talk);
    img2->setIcon(*p2);
    img->setIconSize(size);

    quit_logo->setIcon(*p3);
    quit_logo->setIconSize(size3);
    //img->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    img2->setIconSize(size2);


    img->setParent(this);
    img->setIcon(p1);
    connect(img,&QPushButton::clicked,this,[=](){
        this->hide();
        talk->resize(1200,900);
        talk->show();
    });

    img->show();
    quit_logo->show();
    //NpcTalk->show();
    //NpcTalk->move(100,100);
    resize(1200,900);
}


MainWindow_First::~MainWindow_First()
{
    QMessageBox *quitMessage =new QMessageBox;
    quitMessage->setText("Quited");
    quitMessage->show();
}
