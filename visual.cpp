#include "visual.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include "sculptor.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Visual::Visual(QWidget *parent) : QWidget(parent){

  tamX=15;
  tamY=15;
  tamZ=5;

}

void Visual::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0, 0, width(), height());

    for(float i=0; i<=width(); i=i+(float)(width()/tamX)){
        painter.drawLine(i, 0, i, height());
    }
    for(float j=0; j<=height(); j=j+(float)(height()/tamY)){
        painter.drawLine(0, j, width(), j);
    }

}

//Ao clicar no botão, altera o tamanho da tela de pintura
void Visual::setTam(){
    tamX = tempTamX; tamY = tempTamY; tamZ = tempTamZ;
    repaint();
}

//Muda o valor das variáveis temporárias ao mecher nos sliders
void Visual::tempSetTamX(int x){
    tempTamX = x;
}

void Visual::tempSetTamY(int y){
    tempTamY = y;
}

void Visual::tempSetTamZ(int z){
    tempTamZ = z;
}
