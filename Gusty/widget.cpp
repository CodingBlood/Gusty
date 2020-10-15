#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include "guessing_game.h"
#include "calculator.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Calculator_clicked()
{
    Calculator calculator;
    calculator.setModal(true);
    calculator.exec();

}


void Widget::on_GuessingGame_clicked()
{
    Guessing_Game Guess_Game;
    Guess_Game.setModal(true);
    Guess_Game.exec();
}
