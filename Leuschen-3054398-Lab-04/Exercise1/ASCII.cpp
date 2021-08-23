/* -------------------------------------
*
* File Name: ASCII.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 4
* Description: This prgram will prompt the user to either request the value of a specific integer in the ASCII range (33 to 126) or display the entire ASCII range. The program will loop until the user chooses to exit.
* Date: 3/15/2021
*
-------------------------------------------*/

#include <iostream>
#include <math.h>

int main()

{
	for ( int response = 0; response != 3;) 
	{
		std::cout << "1) Select a specific number\n";
		std::cout << "2) Display visible ASCII values (33 to 126)\n";
		std::cout << "3) Exit\n";
		std::cout << "Choice: ";
		std::cin >> response;
		
		if (response == 1) 
		{
			for (int option1value = 0; option1value < 33 || option1value > 126;) 
			{
				std::cout << "Enter value: ";
				std::cin >> option1value;
				if (option1value >= 33 && option1value <= 126) 
				{
					std::cout << option1value << " = " << (char)option1value << "\n\n";
				}
				else if (option1value < 33 || option1value > 126) 
				{
					std::cout << "Sorry, please enter a valid number (33 to 126)\n\n";
				}
			}
			
		}
		
		else if (response == 2)
		{
			for (int i = 33; i < 127; i++) 
			{
				std::cout << i << " = " << (char)i << "\n";
			}
			std::cout << "\n";
		}
		else if (response == 3) 
		{
			std::cout << "\n";
		}
		else 
		{
			std::cout << "Error, please enter a valid number\n\n";
		}
	}
}