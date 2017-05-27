#include "grade_calculator.h"
#include "ui_grade_calculator.h"
#include <iostream>
#include <vector>

/*@brief Grade Calculator Constructor

Intializes the QWidget and ui. Also sets up majority of connections throughout program. It connects
all the spinners with their respective functions that updates the private variable values. It also
connects buttons with class choices, schema choices, and allows for the final grade calculation.

@param *parent is set as the parent for the QMainWindow
@return No returns.
*/
Grade_Calculator::Grade_Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grade_Calculator), hw1(0), hw2(0), hw3(0), hw4(0), hw5(0), hw6(0), hw7(0), hw8(0),
    m1(0), m2(0), f(0), fp(0), final_grade(0)
{
    ui->setupUi(this);

    //updated all the different fields on the screen
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
    QObject::connect(ui->fpspin, SIGNAL(valueChanged(int)), this, SLOT(updatefp(int)));

    //choosing a class
    QObject::connect(ui->pic10BRadio, SIGNAL(clicked(bool)), this, SLOT(choose_picB()));
    QObject::connect(ui->Pic10Cradio, SIGNAL(clicked(bool)), this, SLOT(choose_picC()));

    //choosing a schema
    QObject::connect(ui->SchemaA, SIGNAL(clicked(bool)), this, SLOT(choose_schema_a()));
    QObject::connect(ui->SchemaB, SIGNAL(clicked(bool)), this, SLOT(choose_schema_b()));

    //calculate
    QObject::connect(ui->Calculate, SIGNAL(clicked(bool)), this, SLOT(choose_schema()));
}

//UPDATING THINGS
/*@brief Update hw1 value

Updates private variable hw1.

@param i is hw1's new value.
@return No returns.
*/
void Grade_Calculator::updatehw1 (int i)
{
    hw1 = i;
}

/*@brief Update hw2 value

Updates private variable hw2.

@param i is hw2's new value.
@return No returns.
*/
void Grade_Calculator::updatehw2 (int i)
{
    hw2 = i;
}

/*@brief Update hw3 value

Updates private variable hw3.

@param i is hw3's new value.
@return No returns.
*/
void Grade_Calculator::updatehw3 (int i)
{
    hw3 = i;
}

/*@brief Update hw4 value

Updates private variable hw4.

@param i is hw4's new value.
@return No returns.
*/
void Grade_Calculator::updatehw4 (int i)
{
    hw4 = i;
}

/*@brief Update hw5 value

Updates private variable hw5.

@param i is hw5's new value.
@return No returns.
*/
void Grade_Calculator::updatehw5 (int i)
{
    hw5 = i;
}

/*@brief Update hw6 value

Updates private variable hw6.

@param i is hw6's new value.
@return No returns.
*/
void Grade_Calculator::updatehw6 (int i)
{
    hw6 = i;
}

/*@brief Update hw7 value

Updates private variable hw7.

@param i is hw7's new value.
@return No returns.
*/
void Grade_Calculator::updatehw7 (int i)
{
    hw7 = i;
}

/*@brief Update hw8 value

Updates private variable hw8.

@param i is hw8's new value.
@return No returns.
*/
void Grade_Calculator::updatehw8 (int i)
{
    hw8 = i;
}

/*@brief Update Midterm 1 value

Updates private variable m1.

@param i is m1's new value.
@return No returns.
*/
void Grade_Calculator::updatem1(int i)
{
    m1 = i;
}

/*@brief Update Midterm 2 value

Updates private variable m2.

@param i is m2's new value.
@return No returns.
*/
void Grade_Calculator::updatem2(int i)
{
    m2 = i;
}

/*@brief Update Final value

Updates private variable f.

@param i is f's new value.
@return No returns.
*/
void Grade_Calculator::updatef(int i)
{
    f = i;
}

/*@brief Update Final Project value

Updates private variable fp.

@param i is fp's new value.
@return No returns.
*/
void Grade_Calculator::updatefp(int i)
{
    fp = i;
}

//CHOOSING SCHEMA OR CLASS
/*@brief Choose Pic10B Course

Chooses the GUI for Pic10B by showing relevant options such as:
hw4-hw8, midterm 2

Also hides irrelevant options such as:
final project

@param no parameters
@return returns nothing.
*/
void Grade_Calculator::choose_picB()
{
    class_picb = true;
    ui->hw4label->show();
    ui->hw4scroll->show();
    ui->hw4spin->show();
    ui->hw5label->show();
    ui->hw5scroll->show();
    ui->hw5spin->show();
    ui->hw6label->show();
    ui->hw6scroll->show();
    ui->hw6spin->show();
    ui->hw7label->show();
    ui->hw7scroll->show();
    ui->hw7spin->show();
    ui->hw8label->show();
    ui->hw8spin->show();
    ui->hw8scroll->show();
    ui->midterm2label->show();
    ui->m2scroll->show();
    ui->m2spin->show();
    ui->fpscroll->hide();
    ui->fpspin->hide();
    ui->fplabel->hide();
}

/*@brief Choose Pic10 CCourse

Chooses the GUI for Pic10C by showing relevant options such as:
final project

Also hides irrelevant options such as:
hw4-hw8, midterm 2

@param no parameters
@return returns nothing.
*/
void Grade_Calculator::choose_picC()
{
    class_picb = false;
    ui->hw4label->hide();
    ui->hw4scroll->hide();
    ui->hw4spin->hide();
    ui->hw5label->hide();
    ui->hw5scroll->hide();
    ui->hw5spin->hide();
    ui->hw6label->hide();
    ui->hw6scroll->hide();
    ui->hw6spin->hide();
    ui->hw7label->hide();
    ui->hw7scroll->hide();
    ui->hw7spin->hide();
    ui->hw8label->hide();
    ui->hw8spin->hide();
    ui->hw8scroll->hide();
    ui->midterm2label->hide();
    ui->m2scroll->hide();
    ui->m2spin->hide();
    ui->fpscroll->show();
    ui->fpspin->show();
    ui->fplabel->show();
}

/*@brief Choose Schema A

Chooses schema a by setting it true.

@param no parameters
@return returns nothing.
*/
void Grade_Calculator::choose_schema_a()
{
    schemaa = true;
}

/*@brief Choose Schema B

Chooses schema B by setting it false.

@param no parameters
@return returns nothing.
*/
void Grade_Calculator::choose_schema_b()
{
    schemaa = false;
}

/*@brief Outputs Final Grade

Based off of boolean values for class and for schema, a final grade is outputted
to the user.

@param no parameters
@return returns nothing.
*/
void Grade_Calculator::choose_schema()
{
    //if class_picb is true, then we want the schema a & b for pic 10b
    if(class_picb)
    {
        if (schemaa) //if schemaa is true, then we want schema a for pic10b
        {
            final_grade = schema_a();
        }
        else //else we want schema b for pic10b
        {
            final_grade = schema_b();
        }
    }
    //if class_picb is false, then we want the schema a & b for pic10c
    else
    {
        if(schemaa) //if schemaa is true, then we want schema a for pic10c
        {
            final_grade = tenc_schema_a();
        }
        else //else we want schema b for pic10c
        {
            final_grade = tenc_schema_b();
        }
    }

    //return whatever the final grade is
    ui->label_14->setText(QString::number(final_grade));
    return;
}

/*@brief Find Lowest Homework

Finds lowest homework grade to be dropped

@param no parameters
@return double that is the final grade as calculated by schema a.
*/
int Grade_Calculator::find_lowest_hw()
{
    int min = hw1; //min is hw1 to begin with
    std::vector<int> all_hw = { hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8 }; //fill vector with hw

    for (int i = 0; i < 8; ++i) //go thru all hw
    {
        if (min > all_hw[i]) //if min is greater than all_hw, min is not the smallest.
        {
            min = all_hw[i]; //set min equal to relatively smaller value
        }
    }

    return min;
}

//ALGORITHMS BEHIND CHOICES
/*@brief Calculate Pic10B's Schema A

Calculates Pic10B's final grade using schema a.
Homework (25%) + Midterm 1 (20%) + Midterm 2 (20%) + Final (35%) = Final Grade
*LOWEST HOMEWORK GRADE DROPPED*

@param no parameters
@return double that is the final grade as calculated by schema a.
*/
double Grade_Calculator::schema_a()
{
    double hw_total, mid1, mid2, fin; //calculate percentage of grade

    //homework - drop lowest score, add rest, divide by 800, find percent of 20
    hw_total = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7 + hw8); //add them all
    hw_total -= find_lowest_hw();
    hw_total /= 700; //divide total by 800
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

/*@brief Calculate Pic10B's Schema B

Calculates Pic10B's final grade using schema b.
Homework (25%) + Midterm 1 or 2 (30%) + Final (45%) = Final Grade
*LOWEST HOMEWORK GRADE DROPPED*
*LOWEST MIDTERM DROPPED*

@param no parameters
@return double that is the final grade as calculated by schema b.
*/double Grade_Calculator::schema_b()
{
    double hw_total, mid, fin; //calculate percentage of grade

    //homework - drop lowest score, add rest, divide by 800, find percent of 20
    hw_total = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7 + hw8); //add them all
    hw_total -= find_lowest_hw();
    hw_total /= 700; //divide total by 800
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
    fin *= 45;

    return (hw_total+ mid + fin);
}

/*@brief Calculate Pic10C's Schema A

Calculates Pic10B's final grade using schema a.
Homework (15%) + Midterm 1 (25%) + Final (30%) + Final Project (35%) = Final Grade

Note: total is over 100% for unknown reason

@param no parameters
@return double that is the final grade as calculated by schema a.
*/
double Grade_Calculator::tenc_schema_a()
{
    double hw_total, mid, final, final_project;

    hw_total = hw1 + hw2 + hw3; //add all homework scores
    hw_total /= 300; //divide total by total
    hw_total *= 15; //percentage of 15

    mid = (m1/100); //divide total by total
    mid *= 25; //percentage of 25

    final = (f/100); //divde total by total
    final *= 30;

    final_project = (fp/100);
    final_project *= 35;

    return (hw_total + mid + final + final_project);
}

/*@brief Calculate Pic10C's Schema B

Calculates Pic10B's final grade using schema a.
Homework (15%) + Final (50%) + Final Project (35%) = Final Grade

@param no parameters
@return double that is the final grade as calculated by schema b.
*/
double Grade_Calculator::tenc_schema_b()
{
    double hw_total, final, final_project;

    hw_total = hw1 + hw2 + hw3; //add all homework scores
    hw_total /= 300; //divide total by total
    hw_total *= 15; //percentage of 15

    final = f/100; //divde total by total
    final *= 50;

    final_project = fp/100;
    final_project *= 35;

    return (hw_total + final + final_project);
}

//DESTRUCTOR
/*@brief Destructor

Deletes memory on heap.

@param no parameters
@return returns nothing.
*/
Grade_Calculator::~Grade_Calculator()
{
    delete ui;
}
