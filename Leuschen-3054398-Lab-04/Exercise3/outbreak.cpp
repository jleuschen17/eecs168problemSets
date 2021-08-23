/* -------------------------------------
*
* File Name: outbreak.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 4
* Description: This program will display the number of people infected after a specific user inputted number of days.
* Date: 3/15/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int dayresponse;
	int day1 = 1;
	int day2 = 4;
	int day3 = 21;
	int nextday = 0;
	
	cout << "OUTBREAK!\n" << "What day do you want a sick count for?: ";
	cin >> dayresponse;
	
	if (dayresponse > 0) {
		if (dayresponse == 1) {
			nextday = day1;
		}
		
		if (dayresponse == 2) {
			nextday = day2;
		}
		
		if (dayresponse == 3) {
			nextday = day3;
		}
		
		if (dayresponse > 3) {
			for (int i = 4; i <= dayresponse; i++) {
			nextday = day1 + day2 + day3;
			day1 = day2;
			day2 = day3;
			day3 = nextday;
			}
		}
		
		cout << "Total people with the flu: " << nextday << "\n";
	}
	
	else {
		cout << "Invalid day\n";
	}
}