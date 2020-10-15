#include "guessing_game.h"
#include "ui_guessing_game.h"
#include <QDebug>
#include <stdlib.h>
#include <time.h>
#include <iostream>

Guessing_Game::Guessing_Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Guessing_Game)
{
    ui->setupUi(this);
    // initialising Random Value
    srand(static_cast<unsigned int>(time(nullptr)));
    //Generate Secret Value
    SecretValue=rand()%10 +1;
    //Printing Secret value
    qDebug() << "Secret Value is : " <<QString::number(SecretValue);
    //Disabling Start Over And abling guess Button
    ui->Guess->setDisabled(false);
    ui->StartOver->setDisabled(true);
}

Guessing_Game::~Guessing_Game()
{
    delete ui;
}

void Guessing_Game::on_Guess_clicked()
{
    GuessValue=ui->GuessValue->value();
       qDebug() << "Guess Value is : " <<QString::number(GuessValue);
       if(SecretValue==GuessValue){
           ui->Message->setText("Congratulations!! You Won. Secret Value is "+QString::number(SecretValue));
           ui->Guess->setDisabled(true);
           ui->StartOver->setDisabled(false);
       }else if (SecretValue>GuessValue) {
           ui->Message->setText("Secret Value is Greater than " +QString::number(GuessValue));
       }else if (SecretValue<GuessValue) {
           ui->Message->setText("Secret Value is Lower than "+QString::number(GuessValue));
       }
}

void Guessing_Game::on_StartOver_clicked()
{
    qDebug() <<"Start Over";
        //Setting new secret value
        SecretValue=rand()%10 +1;
        //Printing Secret value
        qDebug() << "Secret Value is : " <<QString::number(SecretValue);
        //Disabling Start Over Button
        ui->Guess->setDisabled(false);
        ui->StartOver->setDisabled(true);
        //setting spinbox valoe to 0
        ui->GuessValue->setValue(1);
        // setting message none
        ui->Message->setText("");
}
