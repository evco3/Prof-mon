#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <QWidget>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Professor; }
QT_END_NAMESPACE

class Professor : public QWidget
{
    Q_OBJECT

public:
    Professor(std::string profs[], int size, QWidget *parent = nullptr);
    ~Professor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Professor *ui;
};
#endif // PROFESSOR_H
