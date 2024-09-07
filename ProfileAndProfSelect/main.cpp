#include "widget.h"
#include "professor.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    std::string users [10];
    std::string profs [10];
    int size = 10;
    for(int i = 0; i < 10; i++)
    {
        users[i] = "User " + std::to_string(i);
    }

    for(int i =0; i < 10; i++)
    {
        profs[i] = "Prof " + std::to_string(i);
    }

    QApplication a(argc, argv);
    Widget w (users, size);
    w.show();

    Professor p (profs, size);
    p.show();


    return a.exec();
}
