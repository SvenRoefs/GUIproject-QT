/*
Authors:    Sven Roefs
            Ivo Filot
            Emiel Hensen

(C) Copyright 2018 Inorganic Materials Chemistry
*/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow *main_window = new MainWindow();
    main_window->show();

    return app.exec();
}
