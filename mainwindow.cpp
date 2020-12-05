#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "novo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->horizontalSliderTamX, SIGNAL(valueChanged(int)), ui->widget, SLOT(tempSetTamX));
}

MainWindow::~MainWindow(){
    delete ui;
}



