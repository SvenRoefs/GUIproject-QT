#ifndef GENERALPARAMETERSTAB_H
#define GENERALPARAMETERSTAB_H

#include <QObject>
#include <QWidget>
#include <QScrollArea>
#include <QGridLayout>
#include <QDoubleSpinBox>
#include <QVector>
#include <iostream>
#include <QLabel>
#include <QString>

class GeneralParametersTab : public QWidget
{
    Q_OBJECT
private:
    //QGridLayout *gridLayout; //Moet deze hier staan of in mainwindow.h?
    QVector<QDoubleSpinBox*> MinValue;
    QVector<QDoubleSpinBox*> Value;
    QVector<QDoubleSpinBox*> MaxValue;
    QList<QLabel*> parameter; // waarom moet die * erachter?


public:
    explicit GeneralParametersTab(QWidget *parent = nullptr);

private:
        void parVector();
signals:

public slots:
};

#endif // GENERALPARAMETERSTAB_H
