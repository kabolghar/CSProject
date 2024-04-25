#include "player.h"
#include "game.h"
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QRect>
#include <QDebug>
#include <QKeyEvent>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QBrush>

extern Game * game;

Player::Player(QGraphicsItem *parent){
    // draw rect
    setRect(0,0,100,15);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::gray);
    setBrush(brush);
}

double Player::getMidpoint(){
    return x()+rect().width()/2;
}

void Player::mouseMoveEvent(QGraphicsSceneMouseEvent *event){
    double mouseX = mapToScene(event->pos()).x();
    setPos(mouseX,y());
}
