#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QTabWidget>

#include "generalparameterstab.h"
#include "atomicparameterstab.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

private: 
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *formatMenu;
    QMenu *helpMenu;

    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *printAct;
    QAction *exitAct;

    QTabWidget *tabs;
    GeneralParametersTab *general_parameters_tab;
    AtomicParametersTab *atomic_parameters_tab;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    static void newFile();

    static void exit();

private:
    void create_actions();

    void create_menus();

    void create_tabs();
};

#endif // MAINWINDOW_H
