/* -------------------------------------
*
* File Name: restaurant.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 3
* Description: This program will take a restaurant order from an individual and display necessary total values. 
* Date: 3/8/2021
*
-------------------------------------------*/


#include <iostream>
#include <math.h>


int main()

{

	std::cout.precision(2);
	std::cout << std::fixed;

	char saladresponse;
	int saladquant;
	char pizzaresponse;
	int pizzaquant;
	char desertresponse;
	int desertquant;
	int ageresponse;
	double saladtotal;
	double pizzatotal;
	double deserttotal;
	double subtotal;
	double tax;
	double discount;
	double total;
	
	std::cout << "=========================\n";
	std::cout << "WELCOME TO THE RESTAURANT\n";
	std::cout << "=========================\n";
	
	std::cout << "Do you want salads? (y/n)";
	std::cin >> saladresponse;
	
	if (saladresponse == 'y' || saladresponse == 'Y') 
	{
		std::cout << "How many? ";
		std::cin >> saladquant;
	}
	else 
	{
		saladquant = 0;
	}
	
	std::cout << "Do you want pizza? (y/n)";
	std::cin >> pizzaresponse;
	
	if (pizzaresponse == 'y' || pizzaresponse == 'Y')
	{
		std::cout << "How many? ";
		std::cin >> pizzaquant;
	}
	else 
	{
		pizzaquant = 0;
	}
	
	std::cout << "Do you want Deserts? (y/n)";
	std::cin >> desertresponse;
	
	if (desertresponse == 'y' || desertresponse == 'Y')
	{
		std::cout << "How many? ";
		std::cin >> desertquant;
	}
	else 
	{
		desertquant = 0;
	}
	
	std::cout << "How old are you?: ";
	std::cin >> ageresponse;
	
	std::cout << "=========================\n";
	
	if (saladresponse == 'y' || saladresponse == 'Y')
	{
		saladtotal = (saladquant * 3.50);
		
		std::cout << saladquant;
		std::cout << " salads @ $3.50 ==> $";
		std::cout << saladtotal;
		std::cout << "\n";
	}
	else 
	{
		saladtotal = 0;
		std::cout << "0 salads @ $3.50 ==> $0.00\n";
	}
	
	if (pizzaresponse == 'y' || pizzaresponse == 'Y')
	{
		pizzatotal = (pizzaquant * 7.25);
		
		std::cout << pizzaquant;
		std::cout << " pizza @ $7.25 ==> $";
		std::cout << pizzatotal;
		std::cout << "\n";
	}
	else 
	{
		pizzatotal = 0;
		std::cout << "0 pizza @ $7.2 ==> $0.00\n";
	}
	
	if (desertresponse == 'y' || desertresponse == 'Y') 
	{
		deserttotal = (desertquant * 5.50);
		
		std::cout << desertquant;
		std::cout << " Deserts @ $7.25 ==> $";
		std::cout << deserttotal;
		std::cout << "\n";
	}
	else 
	{
		deserttotal = 0;
		std::cout << "0 Deserts @ $3.50 ==> $0.00\n";
	}
	
	if (ageresponse <= 8) 
	{
		subtotal = (saladtotal + pizzatotal);
		
		std::cout << "Subtotal: $";
		std::cout << subtotal;
		std::cout << "\n";
	}
	else 
	{
		subtotal = (saladtotal + pizzatotal + deserttotal);
	
		std::cout << "Subtotal: $";
		std::cout << subtotal;
		std::cout << "\n";
	}
	
	tax = (subtotal * .25);
	
	std::cout << "Tax: $";
	std::cout << tax;
	std::cout << "\n";
	
	if (ageresponse >= 55) 
	{
		discount = (.1 * (subtotal + tax));
		
		std::cout << "Discount: $";
		std::cout << discount;
		std::cout << "\n";
	}
	else if (ageresponse <= 8) 
	{
		discount = deserttotal;
		
		std::cout << "Discount: $";
		std::cout << discount;
		std::cout << "\n";
	}
	else 
	{
		discount = 0;
		
		std::cout << "Discount: 0.00$\n";
	}
	
	std::cout << "=========================\n";
	
	if (ageresponse <= 8) 
	{
		total = (subtotal + tax);
	}
	else 
	{
		total = (subtotal + tax - discount);
	}

	
	std::cout << "Total: $";
	std::cout << total;
	std::cout << "\n";
	
	std::cout << "\nPlease come again!\n\n";
	}