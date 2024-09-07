#include "mainwindow.h"
#include "ui_mainwindow.h"

// should we pass profile and prof index in txtfile from prior profile window
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fightClicked = false;
    redraw = true;

    ui->userHealthBar->setValue(100);           //or is starting health based on the prof?
    ui->opponentHealthBar->setValue(100);       //or is starting health based on the prof?

    //opponentName =                            //get name from txtFile @ prof index?
    //oppenentLevel =                           // does level start at 0?
    //ui->opponentName->setText(oppenentName);
    //ui->oppenentLevel->setText(oppenentLevel);

    //userName =                            //get name and level from txtFile @ profile index?
    //userLevel =
    //ui->userName->setText(userName);
    //ui->userLevel->setText(userLevel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event){
    QPainter painter(this);

    do{
        for(int i = 0; i<100;i++){
            painter.fillRect(QRect(0,325+i,800,300-i*2),QColor(i,153+i,i));
        }
    redraw = false;
    }while(redraw == true);

    painter.setPen(QPen(Qt::gray,10));
    painter.drawRoundedRect(QRect(505,340,260,210),20,20);

    painter.setPen(QPen(QColor(236,236,131),6));
    painter.drawRoundedRect(QRect(500,335,270,220),20,20);


    if(fightClicked==true){
        painter.drawRect(QRect(100,100,270,200));

    }
}

void MainWindow::on_fightButton_clicked()
{
    redraw = true;
    fightClicked = true;
    update();
}

// create funciton for when user or opponent is injured -> update progressBar

// create funcion to update level when ...



void MainWindow::on_userHealthBar_valueChanged(int value)
{
    ui->userHealthBar->setValue(value);    // if small this is okay otherwise, we could loop it to make it look more gradual

}

void MainWindow::on_progressBar_valueChanged(int value)
{
    ui->opponentHealthBar->setValue(value);    // if small this is okay otherwise, we could loop it to make it look more gradual

}

