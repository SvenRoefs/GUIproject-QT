#include "offdiagonalparameters.h"

OffDiagonalParametersTab::OffDiagonalParametersTab(QWidget *parent) : QWidget(parent)
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


        int Columns = 8; // Define amount of columns that you want to have. Rows are defined automatically by dividing the total amount of values by the columns.
        int m = i%Columns;


        // create labels to explain what the columns mean

        QLabel* minval_label = new QLabel("<b>L.B.</b>");
        minval_label->setAlignment(Qt::AlignCenter);
        QLabel* initval_label = new QLabel("<b>Init.</b>");
        initval_label->setAlignment(Qt::AlignCenter);
        QLabel* maxval_label = new QLabel("<b>U.B.</b>");
        maxval_label->setAlignment(Qt::AlignCenter);

            // note that I use here "i+1" because the first row has been used for the column headers
            gridLayout->addWidget(number_label,i*3-m*3,0+(m*5));
            gridLayout->addWidget(labels[i],i*3-m*3,1+(m*5));
            gridLayout->addWidget(minval_label,i*3-m*3,2+(m*5));
            gridLayout->addWidget(initval_label,i*3+1-m*3,2+(m*5));
            gridLayout->addWidget(maxval_label,i*3+2-m*3,2+(m*5));
            gridLayout->addWidget(MinValue[i],i*3-m*3,3+(m*5));
            gridLayout->addWidget(Value[i],i*3+1-m*3,3+(m*5));
            gridLayout->addWidget(MaxValue[i],i*3+2-m*3,3+(m*5));
            gridLayout->addWidget(Checkbox[i],i*3-m*3,4+(m*5),1,1,Qt::AlignJustify);
        // add check boxes here
    }
}

/*
 * @brief   Store the names for the parameters in the label_names
 */
void OffDiagonalParametersTab::construct_label_names() {
    this->label_names.push_back("D");
    this->label_names.push_back("r_vdw");
    this->label_names.push_back("alpha");
    this->label_names.push_back("r_s positive");
    this->label_names.push_back("r_pi positive");
    this->label_names.push_back("r_pi_pi positive");
}
