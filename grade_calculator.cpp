#include "grade_calculator.h"
#include "ui_grade_calculator.h"
#include <iostream>
#include <vector>

Grade_Calculator::Grade_Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grade_Calculator)
{
    ui->setupUi(this);
    QObject::connect(ui->hw1spin, SIGNAL(valueChanged(int)), this, SLOT(updatehw1(int)));
    QObject::connect(ui->hw2spin, SIGNAL(valueChanged(int)), this, SLOT(updatehw2(int)));
    QObject::connect(ui->hw3spin, SIGNAL(valueChanged(int)), this, SLOT(updatehw3(int)));
    QObject::connect(ui->hw4spin, SIGNAL(valueChanged(int)), this, SLOT(updatehw4(int)));
    QObject::connect(ui->hw5spin, SIGNAL(valueChanged(int)), this, SLOT(updatehw5(int)));
    QObject::connect(ui->hw6spin, SIGNAL(valueChanged(int)), this, SLOT(updatehw6(int)));
    QObject::connect(ui->hw7spin, SIGNAL(valueChanged(int)), this, SLOT(updatehw7(int)));
    QObject::connect(ui->hw8spin, SIGNAL(valueChanged(int)), this, SLOT(updatehw8(int)));
    QObject::connect(ui->m1spin, SIGNAL(valueChanged(int)), this, SLOT(updatem1(int)));
    QObject::connect(ui->m2spin, SIGNAL(valueChanged(int)), this, SLOT(updatem2(int)));
    QObject::connect(ui->fspin, SIGNAL(valueChanged(int)), this, SLOT(updatef(int)));

}

void Grade_Calculator::updatehw1 (int i)
{
    hw1 = i;
}

void Grade_Calculator::updatehw2 (int i)
{
    hw2 = i;
}

void Grade_Calculator::updatehw3 (int i)
{
    hw3 = i;
}

void Grade_Calculator::updatehw4 (int i)
{
    hw4 = i;
}

void Grade_Calculator::updatehw5 (int i)
{
    hw5 = i;
}

void Grade_Calculator::updatehw6 (int i)
{
    hw6 = i;
}

void Grade_Calculator::updatehw7 (int i)
{
    hw7 = i;
}

void Grade_Calculator::updatehw8 (int i)
{
    hw8 = i;
}

void Grade_Calculator::updatem1(int i)
{
    m1 = i;
}

void Grade_Calculator::updatem2(int i)
{
    m2 = i;
}

void Grade_Calculator::updatef(int i)
{
    f = i;
}

double Grade_Calculator::schema_a()
{
    double hw_total, mid1, mid2, fin; //calculate percentage of grade

    //homework - drop lowest score, add rest, divide by 800, find percent of 20
    hw_total = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7 + hw8); //add them all
    hw_total -= find_lowest_hw();
    hw_total /= 800; //divide total by 800
    hw_total *= 25; //percentage of 25

    //midterm 1
    mid1 = m1 / 100;
    mid1 *= 20;

    //midterm 2
    mid2 = m2 / 100;
    mid2 *= 20;

    //final
    fin = f / 100;
    fin *= 35;

    return (hw_total + mid1 + mid2 + fin);
}

double Grade_Calculator::schema_b()
{
    double hw_total, mid, fin; //calculate percentage of grade

    //homework - drop lowest score, add rest, divide by 800, find percent of 20
    hw_total = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7 + hw8); //add them all
    hw_total -= find_lowest_hw();
    hw_total /= 800; //divide total by 800
    hw_total *= 25; //percentage of 25

    //take highest midterm score
    if (m1 < m2) //m2 greater
    {
        mid = (m2/100);
    }
    else if (m2 < m1) //m1 greater
    {
        mid = (m1/100);
    }
    else //equal, just take m1
    {
        mid = (m1/100);
    }
    mid *= 30;

    //calculate final
    fin = f / 100;
    fin *= 44;

    return (hw_total+ mid + fin);
}

void Grade_Calculator::choose_schema()
{
    if (schema_a() < schema_b())
    {
        final_grade = schema_b();
    }
    else if (schema_b() < schema_a())
    {
        final_grade = schema_a();
    }
    else
    {
        final_grade = schema_a();
    }
}

int Grade_Calculator::find_lowest_hw()
{
    int min = hw1; //min is hw1 to begin with
    std::vector<int> all_hw = { hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8 }; //fill vector with hw

    for (int i = 0; i < 8; ++i) //go thru all hw
    {
        if (min > all_hw[i])
        {
            min = all_hw[i];
        }
    }

    return min;
}

Grade_Calculator::~Grade_Calculator()
{
    delete ui;
}
