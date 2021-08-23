/* -------------------------------------
*
* File Name: Gibbanaci.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 4
* Description: This program will ask the user a specific integer and display the corresponding numbers in the Gibbanaci sequance that correlate to the inputted integer. 
* Date: 3/15/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int fibresponse;
	int t1 = 5;
	int t2 = 7;
	int nextterm = 0;
	
	cout << "How many Gibonacci numbers do you want printed?: ";
	cin >> fibresponse;
	if (fibresponse == 0)
	{
		cout << "\n";
	}
	else if (fibresponse == 1)
	{
			cout << "5 \n";
	}
		
	else if (fibresponse == 2) 
	{
		cout << "5, 7\n";
	}
	
	else if (fibresponse > 2) 
	{
		cout << "5, 7, ";
		for (int i = 3; i <= fibresponse; i++) 
		{
			nextterm = t1 + t2;
			t1 = t2;
			t2 = nextterm;
			
			if (fibresponse > 2 && i != fibresponse) 
			{
				cout << nextterm << ", ";
			}
			
			if (i == fibresponse) 
			{
				cout << nextterm << "\n";
			}
		}
	}
	else if (fibresponse < 0)
	{
		cout << "Error, please enter a postive number\n";
	}
	else 
	{
		cout << "Error\n";
	}
}