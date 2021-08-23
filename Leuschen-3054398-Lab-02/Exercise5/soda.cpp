/* -------------------------------------
*
* File Name: soda.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 2
* Description: This program will designate the number of Fridge Cubes, Six Packs, and singles that should be used for a given number of sodas. 
* Date: 3/1/2021
*
-------------------------------------------*/

#include <iostream>
#include <math.h>

int main()
{
	float sodas;
	int Fridge_Cubes;
	int Six_Packs;
	int Singles;
	
	std::cout << "How many sodas do you have? ";
	std::cin >> sodas;
	
	Fridge_Cubes= sodas/24;
	Six_Packs= (sodas-(24*Fridge_Cubes))/6;
	Singles= (sodas-(24*Fridge_Cubes)-(6*Six_Packs));
	
	
	std::cout << "Fridge Cubes: " << Fridge_Cubes;
	std::cout << "\nSix-packs: " << Six_Packs;
	std::cout << "\nSingles: " << Singles << std::endl;
}