/* -------------------------------------
*
* File Name: ASC.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 2
* Description: This program will convert the input character to its corresponding ASCII value. 
* Date: 3/1/2021
*
-------------------------------------------*/

#include <iostream>

int main()
{
	char response1;
	std::cout << "Input a character: ";
	std::cin >> response1;
	
	std::cout << "The ASCII value for '" << response1 << "' is: ";
	std::cout << (int)response1 << "\nGoodbye!\n";
}