#ifndef SCORES_H
#define SCORES_H

#include <iostream>

class Scores {
public: 
	Scores() : hw1(0), hw2(0), hw3(0), hw4(0), hw5(0), hw6(0), hw7(0), hw8(0) {};
	void display_scores() const; 
	void update_1(int i);
	void update_2(int i);
	void update_3(int i);
	void update_4(int i);
	void update_5(int i);
	void update_6(int i);
	void update_7(int i);
	void update_8(int i);
	void update_m1(int i); 
	void update_m2(int i); 
	void update_f(int i); 
	double schema_a(); 
	double schema_b(); 
	double choose_schema(); 
	int find_lowest_hw(); 

private: 
	int hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8; 
	int m1, m2, f; 
};


#endif 
