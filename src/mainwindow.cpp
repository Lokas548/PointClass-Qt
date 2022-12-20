#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    Increase();
    vec.append(Point(event->x(),event->y(),getCross_size()));

    //cross width change
    if (clicks < 4){
       vec[clicks].setW(1);
    }
    else{
        vec[clicks].setW(2);
    }
    clicks++;

}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    for(int i =0 ; i < vec.size();i++)
    {
        vec[i].draw(&painter);
    }

    for(int j = 0; j < vec.size() - 1;j++)
    {
        painter.drawLine(vec[j+1].getX(),vec[j+1].getY(),vec[j].getX(),vec[j].getY()); // drawing line between two points
    }
    update();

}




