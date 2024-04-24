#include "health.h"
#include <QFont>
#include <QMessageBox>
#include "game.h"
#include "score.h"
extern Game * game;
Health::Health(Score *scorei, QGraphicsItem *parent): QGraphicsTextItem(parent),scoree(scorei){
    health=3;
    //display the text
    setPlainText("Health: " + QString::number(health));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",14));

}
void Health::decrease(){
    health--;
    setPlainText("Health: " + QString::number(health));
    if (health<1){
        msg->setWindowTitle("Game is over"); // Set the window title
        int s=game->score->getscore();
        msg->setText("your score is: "+QString::number(s)); // Set the main message text
        msg->exec();
        game->scene->clear();
    }
}
int Health::gethealth(){
    return health;
}
