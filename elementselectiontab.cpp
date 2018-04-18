#include "elementselectiontab.h"

ElementSelectionTab::ElementSelectionTab(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout;
    this->setLayout(mainLayout);
    this->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    QGridLayout* grid_layout = new QGridLayout();
    this->elementbox = new QGroupBox();
    this->elementbox->setTitle("Select element");
    this->elementbox->setLayout(grid_layout);
    this->elementbox->setCheckable(false);
    mainLayout->addWidget(this->elementbox);

    // first row transition metals
    this->checkboxes.push_back(new QCheckBox("Sc"));
    this->checkboxes.push_back(new QCheckBox("Ti"));
    this->checkboxes.push_back(new QCheckBox("V"));
    this->checkboxes.push_back(new QCheckBox("Cr"));
    this->checkboxes.push_back(new QCheckBox("Mn"));
    this->checkboxes.push_back(new QCheckBox("Fe"));
    this->checkboxes.push_back(new QCheckBox("Co"));
    this->checkboxes.push_back(new QCheckBox("Ni"));
    this->checkboxes.push_back(new QCheckBox("Cu"));
    this->checkboxes.push_back(new QCheckBox("Zn"));

    // second row transition metals
    this->checkboxes.push_back(new QCheckBox("Y"));
    this->checkboxes.push_back(new QCheckBox("Zr"));
    this->checkboxes.push_back(new QCheckBox("Nb"));
    this->checkboxes.push_back(new QCheckBox("Mo"));
    this->checkboxes.push_back(new QCheckBox("Tc"));
    this->checkboxes.push_back(new QCheckBox("Ru"));
    this->checkboxes.push_back(new QCheckBox("Rh"));
    this->checkboxes.push_back(new QCheckBox("Pd"));
    this->checkboxes.push_back(new QCheckBox("Ag"));
    this->checkboxes.push_back(new QCheckBox("Cd"));

    // third row transition metals
    this->checkboxes.push_back(new QCheckBox("Hf"));
    this->checkboxes.push_back(new QCheckBox("Ta"));
    this->checkboxes.push_back(new QCheckBox("W"));
    this->checkboxes.push_back(new QCheckBox("Re"));
    this->checkboxes.push_back(new QCheckBox("Os"));
    this->checkboxes.push_back(new QCheckBox("Ir"));
    this->checkboxes.push_back(new QCheckBox("Pt"));
    this->checkboxes.push_back(new QCheckBox("Au"));
    this->checkboxes.push_back(new QCheckBox("Hg"));

    for(unsigned int i=0; i<10; i++) {
        grid_layout->addWidget(this->checkboxes[i], 0, i);
    }

    for(unsigned int i=10; i<20; i++) {
        grid_layout->addWidget(this->checkboxes[i], 1, i-10);
    }

    for(unsigned int i=20; i<29; i++) {
        grid_layout->addWidget(this->checkboxes[i], 2, i-19);
    }
}

QString ElementSelectionTab::get_selected_element() const {
    for(unsigned int i=0; i<this->checkboxes.size(); i++) {
        if(this->checkboxes[i]->isChecked()) {
            return this->checkboxes[i]->text();
        }
    }

    return "X";
}
