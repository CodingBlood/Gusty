#ifndef GUESSING_GAME_H
#define GUESSING_GAME_H

#include <QDialog>

namespace Ui {
class Guessing_Game;
}

class Guessing_Game : public QDialog
{
    Q_OBJECT

public:
    explicit Guessing_Game(QWidget *parent = nullptr);
    ~Guessing_Game();

private slots:
    void on_Guess_clicked();

    void on_StartOver_clicked();

private:
    Ui::Guessing_Game *ui;
    int SecretValue,GuessValue;
};

#endif // GUESSING_GAME_H
