#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->window = new QWidget();
    this->layout = new QHBoxLayout;

    this->label = new QLineEdit("Test", this);
    this->label2 = new QLineEdit("Meuldijk!", this);
    this->label3 = new QSpinBox(this);

    this->layout->addWidget(this->label);
    this->layout->addWidget(this->label2);
    this->layout->addWidget(this->label3);

    this->window->setLayout(this->layout);
    this->setCentralWidget(this->window);
    this->show();
    this->resize(640, 480);
}

MainWindow::~MainWindow()
{
}
