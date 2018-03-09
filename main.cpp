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

    QHBoxLayout *hbox = new QHBoxLayout();
    hbox->addWidget(label);
    hbox->addWidget(label2);

    window->setLayout(hbox);
    window->show();

    return a.exec();
}

//MainWindow w;
//w.show();
