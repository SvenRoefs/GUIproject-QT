#include "elementselectiontab.h"

ElementSelectionTab::ElementSelectionTab(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout;
    this->setLayout(mainLayout);
    this->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    QGridLayout* grid_layout = new QGridLayout();
    this->elementbox = new QGroupBox();
    this->elementbox->setTitle("Select elements");
    this->elementbox->setLayout(grid_layout);
    this->elementbox->setCheckable(false);
    mainLayout->addWidget(this->elementbox);

    // first period
    this->checkboxes.push_back(new QCheckBox("H"));
    this->checkboxes.push_back(new QCheckBox("He"));

    //second period
    this->checkboxes.push_back(new QCheckBox("Li"));
    this->checkboxes.push_back(new QCheckBox("Be"));
    this->checkboxes.push_back(new QCheckBox("B"));
    this->checkboxes.push_back(new QCheckBox("C"));
    this->checkboxes.push_back(new QCheckBox("N"));
    this->checkboxes.push_back(new QCheckBox("O"));
    this->checkboxes.push_back(new QCheckBox("F"));
    this->checkboxes.push_back(new QCheckBox("Ne"));

    //third period
    this->checkboxes.push_back(new QCheckBox("Na"));
    this->checkboxes.push_back(new QCheckBox("Mg"));
    this->checkboxes.push_back(new QCheckBox("Al"));
    this->checkboxes.push_back(new QCheckBox("Si"));
    this->checkboxes.push_back(new QCheckBox("P"));
    this->checkboxes.push_back(new QCheckBox("S"));
    this->checkboxes.push_back(new QCheckBox("Cl"));
    this->checkboxes.push_back(new QCheckBox("Ar"));

    //fourth period (first row transition metals)
    this->checkboxes.push_back(new QCheckBox("K"));
    this->checkboxes.push_back(new QCheckBox("Ca"));
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
    this->checkboxes.push_back(new QCheckBox("Ga"));
    this->checkboxes.push_back(new QCheckBox("Ge"));
    this->checkboxes.push_back(new QCheckBox("As"));
    this->checkboxes.push_back(new QCheckBox("Se"));
    this->checkboxes.push_back(new QCheckBox("Br"));
    this->checkboxes.push_back(new QCheckBox("Kr"));

    // fifth period (second row transition metals)
    this->checkboxes.push_back(new QCheckBox("Rb"));
    this->checkboxes.push_back(new QCheckBox("Sr"));
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
    this->checkboxes.push_back(new QCheckBox("In"));
    this->checkboxes.push_back(new QCheckBox("Sn"));
    this->checkboxes.push_back(new QCheckBox("Sb"));
    this->checkboxes.push_back(new QCheckBox("Te"));
    this->checkboxes.push_back(new QCheckBox("I"));
    this->checkboxes.push_back(new QCheckBox("Xe"));

    // sixth period (third row transition metals) including lanthanides
    this->checkboxes.push_back(new QCheckBox("Cs"));
    this->checkboxes.push_back(new QCheckBox("Ba"));
    this->checkboxes.push_back(new QCheckBox("La"));
    this->checkboxes.push_back(new QCheckBox("Ce"));
    this->checkboxes.push_back(new QCheckBox("Pr"));
    this->checkboxes.push_back(new QCheckBox("Nd"));
    this->checkboxes.push_back(new QCheckBox("Pm"));
    this->checkboxes.push_back(new QCheckBox("Sm"));
    this->checkboxes.push_back(new QCheckBox("Eu"));
    this->checkboxes.push_back(new QCheckBox("Gd"));
    this->checkboxes.push_back(new QCheckBox("Tb"));
    this->checkboxes.push_back(new QCheckBox("Dy"));
    this->checkboxes.push_back(new QCheckBox("Ho"));
    this->checkboxes.push_back(new QCheckBox("Er"));
    this->checkboxes.push_back(new QCheckBox("Tm"));
    this->checkboxes.push_back(new QCheckBox("Yb"));
    this->checkboxes.push_back(new QCheckBox("Lu"));
    this->checkboxes.push_back(new QCheckBox("Hf"));
    this->checkboxes.push_back(new QCheckBox("Ta"));
    this->checkboxes.push_back(new QCheckBox("W"));
    this->checkboxes.push_back(new QCheckBox("Re"));
    this->checkboxes.push_back(new QCheckBox("Os"));
    this->checkboxes.push_back(new QCheckBox("Ir"));
    this->checkboxes.push_back(new QCheckBox("Pt"));
    this->checkboxes.push_back(new QCheckBox("Au"));
    this->checkboxes.push_back(new QCheckBox("Hg"));
    this->checkboxes.push_back(new QCheckBox("Tl"));
    this->checkboxes.push_back(new QCheckBox("Pb"));
    this->checkboxes.push_back(new QCheckBox("Bi"));
    this->checkboxes.push_back(new QCheckBox("Po"));
    this->checkboxes.push_back(new QCheckBox("At"));
    this->checkboxes.push_back(new QCheckBox("Rn"));

    // seventh period (fourth row transition metals) including lanthanides
    this->checkboxes.push_back(new QCheckBox("Fr"));
    this->checkboxes.push_back(new QCheckBox("Ra"));
    this->checkboxes.push_back(new QCheckBox("Ac"));
    this->checkboxes.push_back(new QCheckBox("Th"));
    this->checkboxes.push_back(new QCheckBox("Pa"));
    this->checkboxes.push_back(new QCheckBox("U"));
    this->checkboxes.push_back(new QCheckBox("Np"));
    this->checkboxes.push_back(new QCheckBox("Pu"));
    this->checkboxes.push_back(new QCheckBox("Am"));
    this->checkboxes.push_back(new QCheckBox("Cm"));
    this->checkboxes.push_back(new QCheckBox("Bk"));
    this->checkboxes.push_back(new QCheckBox("Cf"));
    this->checkboxes.push_back(new QCheckBox("Es"));
    this->checkboxes.push_back(new QCheckBox("Fm"));
    this->checkboxes.push_back(new QCheckBox("Md"));
    this->checkboxes.push_back(new QCheckBox("No"));
    this->checkboxes.push_back(new QCheckBox("Lr"));
    this->checkboxes.push_back(new QCheckBox("Rf"));
    this->checkboxes.push_back(new QCheckBox("Db"));
    this->checkboxes.push_back(new QCheckBox("Sg"));
    this->checkboxes.push_back(new QCheckBox("Bh"));
    this->checkboxes.push_back(new QCheckBox("Hs"));
    this->checkboxes.push_back(new QCheckBox("Mt"));
    this->checkboxes.push_back(new QCheckBox("Ds"));
    this->checkboxes.push_back(new QCheckBox("Rg"));
    this->checkboxes.push_back(new QCheckBox("Cn"));
    this->checkboxes.push_back(new QCheckBox("Nh"));
    this->checkboxes.push_back(new QCheckBox("Fl"));
    this->checkboxes.push_back(new QCheckBox("Mc"));
    this->checkboxes.push_back(new QCheckBox("Lv"));
    this->checkboxes.push_back(new QCheckBox("Ts"));
    this->checkboxes.push_back(new QCheckBox("Og"));

    //Setting Layout of periodic table to customary format
   // first period
    grid_layout->addWidget(this->checkboxes[0], 0, 0);
    grid_layout->addWidget(this->checkboxes[1], 0, 17);

    // second period
    grid_layout->addWidget(this->checkboxes[2], 1, 0);
    grid_layout->addWidget(this->checkboxes[3], 1, 1);
    for(unsigned int i=4; i<10; i++) {
        grid_layout->addWidget(this->checkboxes[i], 1, i+8);
    }

    // third period
    grid_layout->addWidget(this->checkboxes[10], 2, 0);
    grid_layout->addWidget(this->checkboxes[11], 2, 1);
    for(unsigned int i=12; i<18; i++) {
        grid_layout->addWidget(this->checkboxes[i], 2, i);
    }

    // fourth period
        for(unsigned int i=18; i<36; i++) {
        grid_layout->addWidget(this->checkboxes[i], 3, i-18);
    }

    // fifth period
         for(unsigned int i=36; i<54; i++) {
         grid_layout->addWidget(this->checkboxes[i], 4, i-36);
    }

    //sixth period
    grid_layout->addWidget(this->checkboxes[54], 5, 0);
    grid_layout->addWidget(this->checkboxes[55], 5, 1);
    for(unsigned int i=71; i<86; i++) {
        grid_layout->addWidget(this->checkboxes[i], 5, i-68);
    }

    // seventh period
    grid_layout->addWidget(this->checkboxes[86], 6, 0);
    grid_layout->addWidget(this->checkboxes[87], 6, 1);
    for(unsigned int i=103; i<118; i++) {
        grid_layout->addWidget(this->checkboxes[i], 6, i-100);
    }

    // Sixth period lanthanides
    for(unsigned int i=56; i<71; i++) {
        grid_layout->addWidget(this->checkboxes[i], 7, i-53);
    }

    // Seventh period lanthanides
    for(unsigned int i=88; i<103; i++) {
        grid_layout->addWidget(this->checkboxes[i], 8, i-85);
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
