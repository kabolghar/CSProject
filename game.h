#ifndef GAME_H
#define GAME_H
#include <QApplication>
#include "ball.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include "score.h"
#include "health.h"
#include "player.h"
class Game:public QGraphicsView
{
public:
    Game(QWidget *parent=0);
    QGraphicsScene *scene;
    Player *player;
    Score * score;
    Health * health;
};

#endif // GAME_H
