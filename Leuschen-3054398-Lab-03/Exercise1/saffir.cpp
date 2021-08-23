/* -------------------------------------
*
* File Name: saffir.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 3
* Description: This program will take a wind speed input from a user and output the hurricane level from the saffir scale. 
* Date: 3/8/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>

int main()
{
	int ws;
	
	std::cout << "Input a wind speed (m/s): ";
	std::cin >> ws;
	if (ws > 70)
		{
		std::cout << "A wind speed of ";
		std::cout << ws;
		std::cout << " m/s is a Category 5 hurricane.\n";
		}
	else if (ws > 58) 
	{
		std::cout << "A wind speed of ";
		std::cout << ws;
		std::cout << " m/s is a Category 4 hurricane.\n";
	}
	else if (ws > 50) 
	{
		std::cout << "A wind speed of ";
		std::cout << ws;
		std::cout << " m/s is a Category 3 hurricane.\n";
	}
	else if (ws > 43) 
	{
		std::cout << "A wind speed of ";
		std::cout << ws;
		std::cout << " m/s is a Category 2 hurricane.\n";
	}
	else if (ws > 33) 
	{
		std::cout << "A wind speed of ";
		std::cout << ws;
		std::cout << " m/s is a Category 1 hurricane.\n";
	}
	else if (ws > 18) 
	{
		std::cout << "A wind speed of ";
		std::cout << ws;
		std::cout << " m/s is a tropical storm.\n";
	}
	else if (ws > 0) 
	{
		std::cout << "A wind speed of ";
		std::cout << ws;
		std::cout << " m/s tropical depression.\n";
	}
	else {
		std::cout << "Negative wind? Sorry, that's invalid.\n";
	}
}