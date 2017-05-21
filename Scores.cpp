#include "Scores.h"
#include <iostream>
#include <vector>

void Scores::update_1(int i)
{
	hw1 = i; 
}

void Scores::update_2(int i)
{
	hw2 = i; 
}

void Scores::update_3(int i)
{
	hw3 = i;
}

void Scores::update_4(int i)
{
	hw4 = i;
}

void Scores::update_5(int i)
{
	hw5 = i;
}

void Scores::update_6(int i)
{
	hw6 = i;
}

void Scores::update_7(int i)
{
	hw7 = i;
}

void Scores::update_8(int i)
{
	hw8 = i;
}

void Scores::display_scores() const
{
	std::cout << hw1; 
	std::cout << hw2; 
	std::cout << hw3; 
	std::cout << hw4; 
	std::cout << hw5; 
	std::cout << hw6; 
	std::cout << hw7; 
	std::cout << hw8; 
}

void Scores::update_m1(int i)
{
	m1 = i; 
}

void Scores::update_m2(int i)
{
	m2 = i; 
}

void Scores::update_f(int i)
{
	f = i; 
}

double Scores::schema_a()
{
	double hw, mid1, mid2, fin; 
	hw = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7 + hw8); //add them all
	hw -= find_lowest_hw();
	hw /= 800; //divide total by 800
	hw *= 25; //percentage of 25

	mid1 = m1 / 100; 
	mid1 *= 20; 

	mid2 = m2 / 100; 
	mid2 *= 20; 

	fin = f / 100; 
	fin *= 35; 

	return (hw + mid1 + mid2 + fin); 
}

double Scores::schema_b()
{
	double hw, mid, fin;
	hw = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7 + hw8); //add them all
	hw -= find_lowest_hw(); 
	hw /= 800; //divide total by 800
	hw *= 25; //percentage of 25

	if (m1 < m2)
	{
		mid = (m2/100); 
	}
	else if (m2 < m1)
	{
		mid = (m1/100); 
	}
	else
	{
		mid = (m1/100); 
	}

	mid *= 30;

	fin = f / 100;
	fin *= 44;

	return (hw + mid + fin);
}

double Scores::choose_schema()
{
	if (schema_a() < schema_b())
	{
		std::cout << "Schema b is better for you."; 
		std::cout << std::endl; 
		return schema_b(); 
	}
	else if (schema_b() < schema_a())
	{
		std::cout << "Schema a is better for you."; 
		std::cout << std::endl;
		return schema_a(); 
	}
	else
	{
		std::cout << "They are equal."; 
		std::cout << std::endl;
		return schema_a(); 
	}
}

int Scores::find_lowest_hw()
{
	int min = hw1;
	std::vector<int> all = { hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8 };

	for (int i = 0; i < 8; ++i)
	{
		if (min > all[i])
		{
			min = all[i]; 
		}
	}

	return min; 
}