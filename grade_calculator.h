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
    //updating things
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
    void updatefp (int i);

    //choosing schema or class
    void choose_picB();
    void choose_picC();
    void choose_schema_a(); //10b schema a
    void choose_schema_b(); //10b schema b
    void choose_schema();
    int find_lowest_hw();

    //algorithms behind choices
    double schema_a();
    double schema_b();
    double tenc_schema_a(); //10c schema a
    double tenc_schema_b(); //10 c schema b

private slots:
    void on_spinBox_valueChanged(int arg1);

private:
    Ui::Grade_Calculator *ui;
    /*
    hw = homework
    m = midterm
    f = final
    fp = final project
    */
    int hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8, m1, m2, f, fp;
    /*
    class_picb is for choosing a class.
        true == pick PIC10B
        false == pick PIC10C
    schemaa is for choosing a schema
        true == pick schema a
        false == pick schema b
    */
    bool class_picb, schemaa;
    double final_grade;
};

#endif // GRADE_CALCULATOR_H
