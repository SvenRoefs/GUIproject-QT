#include "atomicparameterstab.h"

AtomicParametersTab::AtomicParametersTab(QWidget *parent) : QWidget(parent)
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
        this->Checkbox.push_back(new QCheckBox());

        // note that I use here "i+1" because the first row has been used for the column headers
        gridLayout->addWidget(number_label,i+2,0);
        gridLayout->addWidget(labels[i],i+2,1);
        gridLayout->addWidget(MinValue[i],i+1,2);
        gridLayout->addWidget(Value[i],i+2,2);
        gridLayout->addWidget(MaxValue[i],i+3,2);
        gridLayout->addWidget(Checkbox[i],i+2,3,1,1,Qt::AlignJustify);

        // add check boxes here
    }
}

/*
 * @brief   Store the names for the parameters in the label_names
 */
void AtomicParametersTab::construct_label_names() {
    this->label_names.push_back("r_s positive");
//    this->label_names.push_back("alpha");
//    this->label_names.push_back("r_pi_pi positive");
//    this->label_names.push_back("p_ovun2");
//    this->label_names.push_back("val fixed");
//    this->label_names.push_back("gamma_w");
//    this->label_names.push_back("p_lp2");
//    this->label_names.push_back("p_val3");
//    this->label_names.push_back("mass fixed");
//    this->label_names.push_back("val_boc fixed");
//    this->label_names.push_back("Not used");
//    this->label_names.push_back("Not used");
//    this->label_names.push_back("r_vdw");
//    this->label_names.push_back("p_ovun5");
//    this->label_names.push_back("b_o_13");
//    this->label_names.push_back("val_val fixed");
//    this->label_names.push_back("epsilon");
//    this->label_names.push_back("Not used");
//    this->label_names.push_back("b_o_132 boc5");
//    this->label_names.push_back("p_val5");
//    this->label_names.push_back("gamma");
//    this->label_names.push_back("chi");
//    this->label_names.push_back("b_o_133 boc5");
//    this->label_names.push_back("rcore2");
//    this->label_names.push_back("r_pi positive");
//    this->label_names.push_back("eta");
//    this->label_names.push_back("Not used");
//    this->label_names.push_back("ecore2");
//    this->label_names.push_back("val_e fixed");
//    this->label_names.push_back("p_hbond");
//    this->label_names.push_back("Not used");
//    this->label_names.push_back("acore2");
}
