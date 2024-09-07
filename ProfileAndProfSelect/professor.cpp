#include "professor.h"
#include "ui_professor.h"
#include <QDebug>
#include <QListWidgetItem>
#include <QMessageBox>

Professor::Professor(std::string profs[], int size, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Professor)
{
    ui->setupUi(this);

    // Background
    //QPixmap bkgnd(url(:/bkgrnd/background.jpg));
    //bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    //QPalette palette;
    //palette.setBrush(QPalette::Window, bkgnd);
    //this->setPalette(palette);

    // Display List of Profs
    for(int i =0; i < size; i++)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(QString::fromStdString(profs[i]));
        item->setCheckState(Qt::Unchecked);
        ui->listWidget->addItem(item);
    }
}

Professor::~Professor()
{
    delete ui;
}

void Professor::on_pushButton_clicked()
{
    std::string selected [3] ;
    int counter = 0;
    bool success = true;
    for(int i = 0; i < ui->listWidget->count(); i++)
    {
        if(ui->listWidget->item(i)->checkState() != Qt::Unchecked)
        {
            if(counter < 3)
            {
                selected[counter] = ui->listWidget->item(i)->text().toStdString();
                counter++;
            }
            else
            {
                success = false;
                break;
            }
        }
    }

    if(counter != 3)
    {
        success = false;
    }

    for(int i = 0; i < counter; i++)
    {
        //qDebug() << "Prof " + selected[i] + " has been selected!" ;
    }


    if(success)
    {
        qDebug() << "Returning";
        // return this to the main file
    }
    else
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Please select 3 Profs !");
        messageBox.setFixedSize(500,200);
    }


}

