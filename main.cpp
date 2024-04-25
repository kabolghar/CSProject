#include "main.h"
#include "game.h"
#include <QApplication>
Game * game;
/*main::main(QWidget *parent)
    : QMainWindow(parent)
{}

main::~main() {}*/
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    game=new Game();
    game->show();

    return a.exec();
}
