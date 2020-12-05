#ifndef VISUAL_H
#define VISUAL_H

#include <QWidget>
#include "sculptor.h"

class Visual : public QWidget{
private:
    int tamX, tamY, tamZ, tempTamX, tempTamY, tempTamZ;
public:
    explicit Visual(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);

signals:

public slots:
    void setTam();
    void tempSetTamX(int x);
    void tempSetTamY(int y);
    void tempSetTamZ(int z);
};

#endif // VISUAL_H
