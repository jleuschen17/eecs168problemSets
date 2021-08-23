/* -------------------------------------
*
* File Name: fileioarray.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 6
* Description: This prgram will display the contents of a text file and validate if a user input is within the text file
* Date: 3/29/2021
*
-------------------------------------------*/
#include <fstream>
#include <iostream>

int main()
{
	const int SIZE = 6;
	int range[SIZE];
	int search;
	char response = 'n';
	
	for (int h = 0; h < 6; h++) 
	{
		range[h] = 0;
	}
	std::ifstream inFile; 
	inFile.open("input.txt");
	if (inFile.is_open())
	{
		for (int i = 0; i < 6; i++)
		{
			inFile >> range[i];
		}
		std::cout << "Contents of input.txt: \n[";
		for (int j = 1; j < 5; j++)
		{
			std::cout << range[j] << ", ";
		}
		std::cout << range[5] << "]\n";
		
		for (int checker = 0; checker == 0;)
		{
			std::cout << "Input a value to search for: ";
			std::cin >> search;
			 
			if (search == range[1] || search == range[2] || search == range[3] || search == range[4] || search == range[5]) 
			{
				std::cout << std::endl << search << " is in the array\n";
			}
			else 
			{
				std::cout << std::endl << search << " is not in the array\n";
			}
			std::cout << "Do you want to quit (y/n): ";
			std::cin >> response;
			std::cout << "\n";
			if (response == 'y' || response == 'Y') 
			{
				checker = 1;
			}
			else if (response == 'n' || response == 'N')	
			{
				checker = 0;
			}
		}
	}
	else 
	{
		std::cout << "File could not be opened!\n";
	}
	inFile.close();
	return(0);
}
