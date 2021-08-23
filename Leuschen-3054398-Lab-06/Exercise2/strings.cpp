/* -------------------------------------
*
* File Name: strings.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 6
* Description: This program requests a dynamic number of strings and takes inputs. The program next displays the longest and shortest string imputted
* Date: 3/29/2021
*
-------------------------------------------*/
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()

{
	int userSize = 0;
	string* response = nullptr;
	string longest; 
	string shortest;
	cout << "Input an array size for your words array: ";
	cin >> userSize;
	response = new string[userSize];
	
	for (int i = 0; i <= userSize - 1; i++) 
	{
		cout << "Input a word: "; 
		cin >> response[i];
	}
	
	longest = response[0];
	for (int i = 0; i < userSize - 1; i++) 
	{
		if (response[i].length() > longest.length()) 
		{
			longest = response[i];
		}
	}
	
	shortest = response[0];
	for (int i = 0; i < userSize - 1; i++) 
	{
		if (response[i].length() < shortest.length()) 
		{
			shortest = response[i];
		}
	}
	
	cout << "The longest word is : " << longest << "\n"; 
	cout << "The shortest word is : " << shortest << "\n";
	
	delete[] response;
	
	return (0);
	
}