#include "game.h"
#include "ball.h"
#include "player.h"
#include "score.h"
#include "health.h"
#include "blocks.h"

Game::Game(QWidget *parent):QGraphicsView(parent){
    scene = new QGraphicsScene(0,0,600,800);
    setScene(scene);
    setMouseTracking(true);
}

void Game:: startgame(){
   Ball *ball= new Ball;
    ball->setPos(300,700);
   scene->addItem(ball);
    Player *player= new Player;
   player->setPos(250,725);
    scene->addItem(player);
   player->grabMouse();
    createbl();
}
void Game::genblocks(int gen){
    for (int i=0;i<5;i++){
        Blocks *block = new Blocks();
        block->setPos(gen,i*64);
        scene ->addItem(block);
    }
}
void Game::createbl(){
    for(int i=0;i<7;i++){
        genblocks(i*64);
    }
}
