#include "generalparameterstab.h"

GeneralParametersTab::GeneralParametersTab(QWidget *parent) : QWidget(parent)
{
    //ScrollArea Widget
    QScrollArea *scrollArea = new QScrollArea(this);     //Create scroll area Widget
    scrollArea->viewport()->setBackgroundRole(QPalette::Dark); //Give background color
    scrollArea->viewport()->setAutoFillBackground(true); //

    //Create grid for input
    QGridLayout *gridLayout = new QGridLayout();
    QLineEdit *min1 = new QLineEdit("min value of A");

    gridLayout->addWidget(min1,0,0,1,1);

    scrollArea->setLayout(gridLayout);



}
