#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QSpinBox>

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QWidget *window;
    QLineEdit *label;
    QLineEdit *label2;
    QSpinBox *label3;
    QHBoxLayout *layout;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:

};

#endif // MAINWINDOW_H
