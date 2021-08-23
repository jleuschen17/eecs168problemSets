/* -------------------------------------
*
* File Name: BNC.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 6
* Description: This program will take 5 user inputs and calculate a variety of totals and extremes of such values.
* Date: 3/29/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>

using namespace std;

int main()

{
	double response[5];
	double max; 
	double min; 
	double sum;
	double average = 0; 
	
	std::cout << "Please enter 5 numbers\n";
	
	for (int i = 0; i < 5; i++) 
	{
		std::cout << "Input a number into your array: ";
		std::cin >> response[i];
	}
	std::cout << "Here are all the numbers in your array: \n";
	for (int j = 0; j < 5; j++) 
	{
		std::cout << response[j] << "\n";
	}
	max = response[0];
	for (int i = 0; i < 5; i++) 
	{
		if(response[i] > max)
		{
			max = response[i];
		}
	}
	min = response[0];
	for (int i = 0; i < 5; i++) 
	{
		if (response[i] < min) 
		{
			min = response[i];
		}
	}
	sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += response[i];
	}
	average = sum / 5;
	
	std::cout << "The sum of all values is: " << sum << "\n";
	std::cout << "The average of all values is: " << average << "\n";
	std::cout << "The largest value is : " << max << "\n";
	std::cout << "The smallest value is : " << min << "\n";
}
	