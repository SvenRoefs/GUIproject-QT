#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QTabWidget>

#include "elementselectiontab.h"
#include "generalparameterstab.h"
#include "atomicparameterstab.h"
#include "twobodyparameterstab.h"
#include "offdiagonalparameters.h"
#include "valenceangleparameters.h"
#include "torsionangleparameters.h"
#include "hydrogenbondparameterstab.h"

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
    ElementSelectionTab *element_selection_tab;
    GeneralParametersTab *general_parameters_tab;
    AtomicParametersTab *atomic_parameters_tab;
    TwoBodyParametersTab *two_body_parameters_tab;
    OffDiagonalParametersTab *off_diagonal_parameters_tab;
    ValenceAngleParametersTab *valence_angle_parameters_tab;
    TorsionAngleParametersTab *torsion_angle_parameters_tab;
    HydrogenBondParametersTab *hydrogen_bond_parameters_tab;


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
