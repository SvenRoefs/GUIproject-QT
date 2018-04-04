#include "generalparameterstab.h"

GeneralParametersTab::GeneralParametersTab(QWidget *parent) : QWidget(parent)
{
    // construct names for the labels
    this->construct_label_names();

    QVBoxLayout *mainLayout = new QVBoxLayout;
    this->setLayout(mainLayout);
    this->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    // add a ScrollArea widget and define properties
    QScrollArea *scrollArea = new QScrollArea(this);     //Create scroll area Widget
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
    gridLayout->setSpacing(2);  // set some spacing between cells
    widget->setLayout(gridLayout);

    // create labels to explain what the columns mean
    // as we don't have to take control of these labels anymore over the execution
    // of the program, I simply construct pointers here which are lost at the
    // end of this function.
    QLabel* namelabel = new QLabel("<b>Parameter name</b>");
    namelabel->setAlignment(Qt::AlignCenter);
    gridLayout->addWidget(namelabel, 0, 1);
    QLabel* minval_label = new QLabel("<b>Lower bound</b>");
    minval_label->setAlignment(Qt::AlignCenter);
    gridLayout->addWidget(minval_label, 0, 2);
    QLabel* initval_label = new QLabel("<b>Initial value</b>");
    initval_label->setAlignment(Qt::AlignCenter);
    gridLayout->addWidget(initval_label, 0, 3);
    QLabel* maxval_label = new QLabel("<b>Upper bound</b>");
    maxval_label->setAlignment(Qt::AlignCenter);
    gridLayout->addWidget(maxval_label, 0, 4);
    QLabel* checkbox_label = new QLabel("<b>Variation flag</b>");
    checkbox_label->setAlignment(Qt::AlignCenter);
    gridLayout->addWidget(checkbox_label, 0, 5);

    // add Textboxes to the layout
    for(unsigned int i=0; i<this->label_names.size(); i++){ // loop over label names (each name correspond to an row)
        // create a label that shows variable number
        QLabel* number_label = new QLabel(std::to_string(i+1).c_str());
        number_label->setFixedWidth(30);            // set the label width to 50px
        number_label->setAlignment(Qt::AlignCenter); // align label to the right

        // the widgets that I create here, I will need to access later (i.e. for extracting the values), hence, I
        // store a pointer to these labels in the corresponding members (class variables)
        this->labels.push_back(new QLabel(("<b>" + this->label_names[i] + "</b>").c_str()));
        this->MinValue.push_back(new QDoubleSpinBox());
        this->Value.push_back(new QDoubleSpinBox());
        this->MaxValue.push_back(new QDoubleSpinBox());

        // note that I use here "i+1" because the first row has been used for the column headers
        gridLayout->addWidget(number_label,i+1,0);
        gridLayout->addWidget(labels[i],i+1,1);
        gridLayout->addWidget(MinValue[i],i+1,2);
        gridLayout->addWidget(Value[i],i+1,3);
        gridLayout->addWidget(MaxValue[i],i+1,4);

        // add check boxes here
    }
}

/*
 * @brief   Store the names for the parameters in the label_names
 */
void GeneralParametersTab::construct_label_names() {
    this->label_names.push_back("Bonder order correction 1");
    this->label_names.push_back("Bonder order correction 2");
    this->label_names.push_back("Valency angle conjugation parameter");
    this->label_names.push_back("Triple bond stabilisation parameter");
    this->label_names.push_back("Triple bond stabilisation parameter");
    this->label_names.push_back("C2 correction");
    this->label_names.push_back("Undercoordination parameter");
    this->label_names.push_back("Triple bond stabilisation parameter");
    this->label_names.push_back("Undercoordination parameter");
    this->label_names.push_back("Undercoordination parameter");
    this->label_names.push_back("Triple bond stabilisation energy");
    this->label_names.push_back("Lower Taper-radius");
    this->label_names.push_back("Upper Taper-radius");
    this->label_names.push_back("Not used");
    this->label_names.push_back("Valency Undercoordination");
    this->label_names.push_back("Valency angle/lone pair parameter");
    this->label_names.push_back("Valency angle");
    this->label_names.push_back("Valency angle parameter");
    this->label_names.push_back("Not used");
    this->label_names.push_back("Double bond/angle parameter");
    this->label_names.push_back("Double bond/angle parameter: overcoord");
    this->label_names.push_back("Double bond/angle parameter: overcoord");
    this->label_names.push_back("Not used");
    this->label_names.push_back("Torsion/BO parameter");
    this->label_names.push_back("Torsion overcoordination");
    this->label_names.push_back("Torsion overcoordination");
    this->label_names.push_back("Conjugation 0 (not used)");
    this->label_names.push_back("Conjugation");
    this->label_names.push_back("vdWaals shielding");
    this->label_names.push_back("Cutoff for bond order (*100)");
    this->label_names.push_back("Valency angle conjugation parameter");
    this->label_names.push_back("Overcoordination parameter");
    this->label_names.push_back("Overcoordination parameter");
    this->label_names.push_back("Valency/lone pair parameter");
    this->label_names.push_back("Not used");
    this->label_names.push_back("Not used");
    this->label_names.push_back("Molecular energy (not used)");
    this->label_names.push_back("Molecular energy (not used)");
    this->label_names.push_back("Valency angle conjugation parameter");
}
