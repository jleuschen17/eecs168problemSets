/* -------------------------------------
*
* File Name: temperature.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 2
* Description: This program will convert the input temperature from Fahrenheit to Celsius. 
* Date: 3/1/2021
*
-------------------------------------------*/

#include <iostream>
#include <math.h>

int main()
{
	float a;
	float b;
	
	std::cout << "Enter a value for Farenheit: ";
	std::cin >> a;
	
	b= 5*(a-32)/9;
	
	std::cout << "Celsius: " << b << std::endl;
}