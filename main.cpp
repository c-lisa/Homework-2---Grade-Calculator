#include <iostream>
#include "Scores.h"
#include <string>

int main() 
{
	int i; 
	Scores A; 

	std::cout << "Input scores: " << std::endl; 
	std::cout << "Hw1: " << std::endl;
	std::cin >> i; 
	A.update_1(i); 
	
	std::cout << "Hw2: " << std::endl;
	std::cin >> i;
	A.update_2(i);

	std::cout << "Hw3: " << std::endl;
	std::cin >> i;
	A.update_3(i);

	std::cout << "Hw4: " << std::endl;
	std::cin >> i;
	A.update_4(i);

	std::cout << "Hw5: " << std::endl;
	std::cin >> i;
	A.update_5(i);

	std::cout << "Hw6: " << std::endl;
	std::cin >> i;
	A.update_6(i);

	std::cout << "Hw7: " << std::endl;
	std::cin >> i;
	A.update_7(i);

	std::cout << "Hw8: " << std::endl;
	std::cin >> i;
	A.update_8(i);
	
	//A.display_scores(); 
	std::cout << std::endl;

	bool change = true; 
	int hw; 

	while (change)
	{
		std::string cont; 
		std::cout << "Any homework you would like to change? (Y/N)" << std::endl;
		std::cin >> cont; 

		if (cont == "N" || cont == "n")
		{
			change = false; 
		}
		else
		{
			std::cout << "Which homework would you like to change?"; 
			std::cin >> hw;
			if (hw == 1)
			{
				std::cout << "Input updated score: " << std::endl;
				std::cin >> i;
				A.update_1(i);
			}
			else if (hw == 2)
			{
				std::cout << "Input updated score: " << std::endl;
				std::cin >> i;
				A.update_2(i);
			}
			else if (hw == 3)
			{
				std::cout << "Input updated score: " << std::endl;
				std::cin >> i;
				A.update_3(i);
			}
			else if (hw == 4)
			{
				std::cout << "Input updated score: " << std::endl;
				std::cin >> i;
				A.update_4(i);
			}
			else if (hw == 5)
			{
				std::cout << "Input updated score: " << std::endl;
				std::cin >> i;
				A.update_5(i);
			}
			else if (hw == 6)
			{
				std::cout << "Input updated score: " << std::endl;
				std::cin >> i;
				A.update_6(i);
			}
			else if (hw == 7)
			{
				std::cout << "Input updated score: " << std::endl;
				std::cin >> i;
				A.update_7(i);
			}
			else
			{
				std::cout << "Input updated score: " << std::endl;
				std::cin >> i;
				A.update_8(i);
			}
		}
	}

	//A.display_scores(); 
	std::cout << std::endl;

	std::cout << "Now for tests." << std::endl; 
	std::cout << "Midterm 1: " << std::endl; 
	std::cin >> i; 
	A.update_m1(i); 

	std::cout << "Midterm 2: " << std::endl;
	std::cin >> i;
	A.update_m2(i);

	std::cout << "Final: " << std::endl;
	std::cin >> i;
	A.update_f(i);

	std::cout << A.choose_schema(); 

	std::cout << std::endl; 

	std::cout << A.find_lowest_hw();

	system("Pause"); 
	return 0; 
}