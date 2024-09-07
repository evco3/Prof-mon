#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QListWidgetItem>
#include "mainwindow.h"

Widget::Widget(std::string users[], int size, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Background
    //QPixmap bkgnd("/Users/duncanscanga/Documents/university/thirdyear/CISC320/FE/ProfileAndProfSelect/background.jpg");
    //bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    //QPalette palette;
    //palette.setBrush(QPalette::Window, bkgnd);
    //this->setPalette(palette);

    // Display List of Users
    for(int i =0; i < size; i++)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(QString::fromStdString(users[i]));
        ui->listWidget->addItem(item);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_listWidget_itemClicked(QListWidgetItem *item)
{
    qDebug() << "User " + item->text() + " has been selected!" ;
    // return this to the main file

    mainwindow
}


void Widget::on_pushButton_clicked()
{
    qDebug() << "User " + ui->lineEdit->text() + " has been created!";
    // return this to the main file
}

