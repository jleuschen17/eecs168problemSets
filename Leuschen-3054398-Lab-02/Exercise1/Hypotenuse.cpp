/* -------------------------------------
*
* File Name: Hypotenuse.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 2
* Description: This program will solve for the hypotenuse of a right triangle given 2 base side lengths.
* Date: 3/1/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>

int main () {
		float a;
		float b;
		float c;
		
		std::cout << "Enter a value for a: ";
		std::cin >> a;
		std::cout << "Enter a value for b: ";
		std::cin >> b;
		
		float a2 = pow(a, 2);
		float b2 = pow(b, 2);
		c= sqrt(a2 + b2);
		
		std::cout << "Hypotenuse: " << c << std::endl;
}