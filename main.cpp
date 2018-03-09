#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *window = new QWidget();
    QLabel * label = new QLabel("Test");
    QLabel * label2 = new QLabel("Meuldijk!");

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(label);
    layout->addWidget(label2);

    window->setLayout(layout);
    window->show();

    return a.exec();
}

//MainWindow w;
//w.show();
