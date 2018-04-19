#ifndef ELEMENTSELECTIONTAB_H
#define ELEMENTSELECTIONTAB_H

#include <QWidget>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QCheckBox>
#include <QGridLayout>
#include <QLabel>

class ElementSelectionTab : public QWidget
{
    Q_OBJECT
private:
    QGroupBox* elementbox;
    std::vector<QCheckBox*> checkboxes;

public:
    explicit ElementSelectionTab(QWidget *parent = 0);

    QString get_selected_element() const;
    int get_number_selected_elements();
};

#endif // ELEMENTSELECTIONTAB_H
