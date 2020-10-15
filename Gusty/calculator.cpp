#include "calculator.h"
#include "ui_calculator.h"
#include "QDebug"

Calculator::Calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_pushButton_clicked()
{
    //1
    if(val>=0){
    val=(val*10)+1;}else{
        val=(val*10)-1;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_2_clicked()
{
    //2
    if(val>=0){
    val=(val*10)+2;}else{
        val=(val*10)-2;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_4_clicked()
{
    //3
    if(val>=0){
    val=(val*10)+3;}else{
        val=(val*10)-3;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_3_clicked()
{
    // +

//    if(lop==1){val=val+val1;ui->lcdNumber->display(val);val1=0;}
    if(lop==2){val=val1-val;ui->lcdNumber->display(val);val1=0;}
    else if(lop==3){val=val1*val;ui->lcdNumber->display(val);val1=0;}
    else if(lop==4){val=val1/val;ui->lcdNumber->display(val);val1=0;}
    lop=1;
    if(val1==0){
        ui->lcdNumber->display(val);
        val1=val;
        val=0;
    }else{
        val+=val1;
        val1=val;
        ui->lcdNumber->display(val);
        val=0;
    }
}

void Calculator::on_pushButton_5_clicked()
{
    //4
    if(val>=0){
    val=(val*10)+4;}else{
        val=(val*10)-4;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_6_clicked()
{
    //5
    if(val>=0){
    val=(val*10)+5;}else{
        val=(val*10)-5;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_7_clicked()
{
    //6
    if(val>=0){
    val=(val*10)+6;}else{
        val=(val*10)-6;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_8_clicked()
{
    //-

    if(lop==1){val=val+val1;ui->lcdNumber->display(val);val1=0;}
//    else if(lop==2){val=val1-val;ui->lcdNumber->display(val);val1=0;}
    else if(lop==3){val=val1*val;ui->lcdNumber->display(val);val1=0;}
    else if(lop==4){val=val1/val;ui->lcdNumber->display(val);val1=0;}
    lop=2;
    if(val1==0){
        ui->lcdNumber->display(val);
        val1=val;
        val=0;
    }else{
        val=val1-val;
        val1=val;
        ui->lcdNumber->display(val);
        val=0;
    }
}

void Calculator::on_pushButton_9_clicked()
{
    //7
    if(val>=0){
    val=(val*10)+7;}else{
        val=(val*10)-7;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_10_clicked()
{
    //8
    if(val>=0){
    val=(val*10)+8;}else{
        val=(val*10)-8;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_11_clicked()
{
    //9
    if(val>=0){
    val=(val*10)+9;}else{
        val=(val*10)-9  ;
    }
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_12_clicked()
{
    //*

    if(lop==1){val=val+val1;ui->lcdNumber->display(val);val1=0;}
    else if(lop==2){val=val1-val;ui->lcdNumber->display(val);val1=0;}
//    else if(lop==3){val=val1*val;ui->lcdNumber->display(val);val1=0;}
    else if(lop==4){val=val1/val;ui->lcdNumber->display(val);val1=0;}
    lop=3;
    if(val1==0){
        ui->lcdNumber->display(val);
        val1=val;
        val=0;
    }else{
        val=val1*val;
        val1=val;
        ui->lcdNumber->display(val);
        val=0;
    }
}

void Calculator::on_pushButton_13_clicked()
{
    //0
    val=(val*10);
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_14_clicked()
{
    //00
    val=(val*100);
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_15_clicked()
{
    //+/-

    if(lop==1){val=val+val1;val1=0;}
    else if(lop==2){val=val1-val;val1=0;}
    else if(lop==3){val=val1*val;val1=0;}
    else if(lop==4){val=val1/val;val1=0;}
    val=(val*(-1));
    ui->lcdNumber->display(val);
}

void Calculator::on_pushButton_16_clicked()
{
    // /

    if(lop==1){val=val+val1;ui->lcdNumber->display(val);val1=0;}
    else if(lop==2){val=val1-val;ui->lcdNumber->display(val);val1=0;}
    else if(lop==3){val=val1*val;ui->lcdNumber->display(val);val1=0;}
//    else if(lop==4){val=val1/val;ui->lcdNumber->display(val);val1=0;}
    lop=4;
    if(val1==0){
        ui->lcdNumber->display(val);
        val1=val;
        val=0;
    }else{
        val=val1/val;
        val1=val;
        ui->lcdNumber->display(val);
        val=0;
    }
}

void Calculator::on_pushButton_18_clicked()
{
    //C
    val=0;
    val1=0;
    ui->lcdNumber->display(0);
}

void Calculator::on_pushButton_17_clicked()
{
    //=
    if(lop==1){val=val+val1;ui->lcdNumber->display(val);val1=0;}
    else if(lop==2){val=val1-val;ui->lcdNumber->display(val);val1=0;}
    else if(lop==3){val=val1*val;ui->lcdNumber->display(val);val1=0;}
    else if(lop==4){val=val1/val;ui->lcdNumber->display(val);val1=0;}
    val=0;val1=0;
}
