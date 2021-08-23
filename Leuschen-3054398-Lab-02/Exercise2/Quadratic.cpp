/* -------------------------------------
*
* File Name: Quadratic.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 2
* Description: This program will solve for the roots of a second degree quadratic equation given the 2 coefficent values and the constant value of the equation.
* Date: 3/1/2021
*
-------------------------------------------*/

#include <iostream>
#include <math.h>

int main () {
		float a;
		float b;
		float c;
		float d;
		float e;
		
		std::cout << "Enter a value for a: ";
		std::cin >> a;
		std::cout << "Enter a value for b: ";
		std::cin >> b;
		std::cout << "Enter a value for c: ";
		std::cin >> c;
		
		d= (-1*b + (sqrt((pow(b, 2)- 4*(a*c)))))/(2*a);
		e= (-1*b - (sqrt((pow(b, 2)- 4*(a*c)))))/(2*a);
		std::cout << "Root 1: " << d;
		std::cout << "\nRoot 2: " << e << std::endl;
	}