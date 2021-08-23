/* -------------------------------------
*
* File Name: printerv2.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 3
* Description: This program will take a numerator and denomenator input from a user and complete division including remainder value. 
* Date: 3/8/2021
*
-------------------------------------------*/


#include <iostream>
#include <math.h>


int main()
{
	int num;
	int denominator;
	int result;
	int rem; 
	
	std::cout << "Enter a numerator: ";
	std::cin >> num;
	
	std::cout << "Enter a denominator: ";
	std::cin >> denominator;
	
	result= (num / denominator);
	rem = num % denominator;
	if (denominator > 0 || denominator < 0) 
	{
		std::cout << num;
		std::cout << " / ";
		std::cout << denominator;
		std::cout << " = ";
		std::cout << result;
	
		std::cout << "R" << rem << "\n";
	}
	else 
	{
		std::cout << "Sorry, you may not divide by zero.\n";
	}
	
}
