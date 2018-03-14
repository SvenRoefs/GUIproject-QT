#include "generalparameterstab.h"

GeneralParametersTab::GeneralParametersTab(QWidget *parent) : QWidget(parent)
{
    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->viewport()->setBackgroundRole(QPalette::Dark);
    scrollArea->viewport()->setAutoFillBackground(true);
}
