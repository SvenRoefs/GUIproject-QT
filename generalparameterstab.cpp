#include "generalparameterstab.h"

GeneralParametersTab::GeneralParametersTab(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout;
    this->setLayout(mainLayout);
    this->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    // add a ScrollArea widget and define properties
    QScrollArea *scrollArea = new QScrollArea(this);     //Create scroll area Widget
    scrollArea->viewport()->setBackgroundRole(QPalette::Dark); //Give background color
    scrollArea->viewport()->setAutoFillBackground(true); //
    scrollArea->setContentsMargins(0,0,0,0);
    scrollArea->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    scrollArea->setWidgetResizable(true);

    // add ScrollArea to QWidget GPT
    mainLayout->addWidget(scrollArea);

    // create new Widget for in the QScrollArea and set properties
    QWidget* widget = new QWidget();
    widget->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    // add Widget to ScrollArea
    scrollArea->setWidget(widget);

    // define GridLayout for the QWidget *inside* the QScrollArea
    QGridLayout *gridLayout = new QGridLayout();
    widget->setLayout(gridLayout);

    // add Textboxes to the layout
    for(int i=0; i<39; i++){
        this->MinValue.push_back(new QDoubleSpinBox());
        this->Value.push_back(new QDoubleSpinBox());
        this->MaxValue.push_back(new QDoubleSpinBox());

        gridLayout->addWidget(MinValue[i],i,0);
        gridLayout->addWidget(Value[i],i,1);
        gridLayout->addWidget(MaxValue[i],i,2);
    }
}
