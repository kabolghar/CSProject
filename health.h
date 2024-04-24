#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QMessageBox>
#include "score.h"
class Health: public QGraphicsTextItem {
public:
    Health(Score *scoree, QGraphicsItem *parent = nullptr);
    void decrease();
    int gethealth();
private:
    int health;
    QMessageBox* msg = new QMessageBox;
    Score *scoree;
};


#endif // HEALTH_H
