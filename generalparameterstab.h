#ifndef GENERALPARAMETERSTAB_H
#define GENERALPARAMETERSTAB_H

#include <QObject>
#include <QWidget>
#include <QScrollArea>
#include <QGridLayout>
#include <QDoubleSpinBox>
#include <QVector>
#include <QLabel>
#include <QString>
#include <QCheckBox>

#include <string>
#include <vector>

class GeneralParametersTab : public QWidget
{
    Q_OBJECT
private:
    QVector<QDoubleSpinBox*> MinValue;  //!< pointers to lower bounds
    QVector<QDoubleSpinBox*> Value;     //!< pointers to initial values
    QVector<QDoubleSpinBox*> MaxValue;  //!< pointers to upper bounds
    QVector<QCheckBox*> Checkbox;       //!< pointers to checkbox on/off
    QVector<QLabel*> labels;            //!< vector holding pointers to QLabels

    // add vector to hold checkbox pointers here

    std::vector<std::string> label_names;           //!< vector holding label names

public:
    explicit GeneralParametersTab(QWidget *parent = nullptr);

private:
        /*
         * @brief   Store the names for the parameters in the label_names
         */
        void construct_label_names();
signals:

public slots:
};

#endif // GENERALPARAMETERSTAB_H
