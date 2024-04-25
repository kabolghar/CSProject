#include "game.h"
#include "ball.h"
#include "player.h"
#include "score.h"
#include "health.h"
#include "blocks.h"

Game::Game(QWidget *parent) {

    scene = new QGraphicsScene();

    player=new Player();
    scene->addItem(player);

    score=new Score();
    scene->addItem(score);

    health=new Health(score);

    Ball* ball = new Ball();
    ball->setPos(200,500);
    scene->addItem(ball);

    health->setPos(health->x(),health->y()+25);
    scene->addItem(health);

    //create blocks
    for (size_t i = 0, n = 5; i < n; ++i){

        Blocks* block = new Blocks();

        block->setPos(2,i*50); //x position

        scene->addItem(block);
    }

    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // show the view
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
}
