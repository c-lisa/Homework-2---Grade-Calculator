#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

#include <QMainWindow>
#include <iostream>

namespace Ui {
class Grade_Calculator;
}

class Grade_Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Grade_Calculator(QWidget *parent = 0);
    ~Grade_Calculator();

public slots:
    void updatehw1 (int i);
    void updatehw2 (int i);
    void updatehw3 (int i);
    void updatehw4 (int i);
    void updatehw5 (int i);
    void updatehw6 (int i);
    void updatehw7 (int i);
    void updatehw8 (int i);
    void updatem1 (int i);
    void updatem2 (int i);
    void updatef (int i);
    double schema_a();
    double schema_b();
    void choose_schema();
    int find_lowest_hw();

private slots:
    void on_spinBox_valueChanged(int arg1);

private:
    Ui::Grade_Calculator *ui;
    int hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8, m1, m2, f;
    double final_grade;
};

#endif // GRADE_CALCULATOR_H
