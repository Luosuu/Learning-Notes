#include "mainwindow.h"
#include <QMainWindow>
#include <QPushButton>
#include <QPixmap>
#include <QSize>
#include <QMouseEvent>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMainWindow *new_window = new QMainWindow; //创建一个新的窗口，这是我们接下来要跳转的目标。
    QPushButton *toNewWindow = new QPushButton;//这是在this窗口里的按钮，我们要通过触发这个按钮跳转到新窗口
    QPushButton *ReturnthisWindow = new QPushButton;
    QPixmap *newButtonIcon = new QPixmap(":/SchoolGirls.jpg");//创建一个QPixmap类型的对象，用作button的图标，括号里的是资源文件
    QPixmap *returnButtonIcon = new QPixmap(":/LeiMuu");
    QSize *newButtonIconsize = new QSize(200,500);//括号里是像素的大小
    QSize *reButtonIconsize = new QSize(300,300);
    QMessageBox *nihao = new QMessageBox;

    nihao->setText("helloworld");
    nihao->setParent(this);
    nihao->move(200,200);

    this->setFixedSize(400,400);
    new_window->setFixedSize(400,400);

    toNewWindow->setParent(this);//把按钮设置在this窗口上
    toNewWindow->setIcon(*newButtonIcon);//把按钮的图标加上
    toNewWindow->setIconSize(*newButtonIconsize);//调整图标的大小
    toNewWindow->setFixedSize(300,100);//调整Button的大小
    toNewWindow->move(50,120);

    ReturnthisWindow->setParent(new_window);
    ReturnthisWindow->setIcon(*returnButtonIcon);
    ReturnthisWindow->setIconSize(*reButtonIconsize);
    ReturnthisWindow->setFixedSize(*reButtonIconsize);
    ReturnthisWindow->move(50,50);

    connect(toNewWindow,&QPushButton::clicked,new_window,&QMainWindow::show);
    connect(toNewWindow,&QPushButton::clicked,this,&QMainWindow::hide);

    connect(ReturnthisWindow,&QPushButton::clicked,this,&QMainWindow::show);
    connect(ReturnthisWindow,&QPushButton::clicked,new_window,&QMainWindow::hide);


}

MainWindow::~MainWindow()
{

}
