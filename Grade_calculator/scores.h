#ifndef SCORES_H
#define SCORES_H

#include"mainwindow.h"

class scores{
    Q_OBJECT

public:
    scores():hw1(0), hw2(0), hw3(0), hw4(0), hw5(0), hw6(0), hw7(0), hw8(0);
    void update_scores();

private:
    int hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8;
};

#endif // SCORES_H
