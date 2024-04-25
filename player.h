#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QDebug>
#include <QObject>

class Player: public QObject, public QGraphicsRectItem
{
public:
    Player(QGraphicsItem* parent=NULL);
    double getMidpoint();
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
};

#endif // PLAYER_H
