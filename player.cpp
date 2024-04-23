#include "ball.h"
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

extern Game * game;

Player::Player()
{}

void Player::keyPressEvent(QKeyEvent *event)
{

    if(event->key()== Qt::Key_Left || event->key() == Qt::Key_A)
    {
        if(x()>0)
        {
            collisonPlayer();
            setPos(x()-10,y());
        }
    }
    else if(event->key()== Qt::Key_Right || event->key() == Qt::Key_D)

    {
        collisonPlayer();
        if(x()+80<800)
            setPos(x()+10,y());
    }

}

void Player::collisonPlayer()
{
    QList<QGraphicsItem *> collison = collidingItems();
    for (int i = 0; i<collison.size(); i++){
        if (typeid (Ball) == typeid(*(collison[i]))){


        }
    }
}
