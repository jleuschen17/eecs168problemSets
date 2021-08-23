/* -------------------------------------
*
* File Name: functions.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 8
* Description: This program uses functions to modify a user integer input in a variety of ways. The alterations include counting the digits, adding the digits, confirming if the integer is a palindrome, and reversing the digits. 
* Date: 4/12/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>

using namespace std;
int lastDigit(int n) //finds last digit of an integer
{
	int lastdigit = 0;
	lastdigit = n % 10;
	return(lastdigit);
}
int removeLastDigit(int n) //removes last digit of an integer
{
	int nolastdigit = 0; 
	nolastdigit = n / 10;
	return(nolastdigit);
}
int countdigits(int n) //counts the total number of digits in an integer
{
	int numofdigits = 0; 
	for (int i = 0; n >= 1; i++) 
	{
		n = removeLastDigit(n);
		numofdigits = numofdigits + 1;
	}
	return(numofdigits);
}
int sumDigits (int n) //finds sum of all digits in integer
{
	int sumofdigits = 0;
	int digitscaler = countdigits(n);
	for (int i = 0; i < digitscaler; i++) 
	{
		sumofdigits = sumofdigits + lastDigit(n);
		n = removeLastDigit(n);
	}
	return(sumofdigits);
}
int addDigit(int currentNum, int newDigit) //adds a new digit to the end of an integer
{
	int newDigitscaler;
	int newvalue;
	int originaldigitscaler = countdigits(currentNum);
	newDigitscaler = newDigit * int(pow(10, originaldigitscaler));
	newvalue = newDigitscaler + currentNum;
	return(newvalue);
	
}

int reverse(int n) //reverses the order of digits in an integer
{
	int reversevalue = 0;
	int addonvalue = 0;
	int digitscaler = countdigits(n);
	for (int i = 0; i < digitscaler; i++) 
	{
		addonvalue = lastDigit(n) * (int(pow(10, (digitscaler - i - 1))));
		reversevalue = reversevalue + addonvalue;
		n = removeLastDigit(n);
	}
	return(reversevalue);
}
bool isPalindrome(int n) //checks if an integer is a palindrome
{
	bool palchecker;
	if (n == reverse(n)) 
	{
		palchecker = true; 
	}
	else 
	{
		palchecker = false;
	}
	return(palchecker);
}
void printMenu() //prints the menu
{
	cout << "1) Count digits\n" << "2) Sum digits\n" << "3) Is Palindrome\n" << "4) Reverse\n" << "5) Exit\n";
}
void run() //runs the main program
{
	int userinput = 0; 
	int n = 0;
	int palchecker = 0;
	do
	{
		printMenu();
		cout << "Choice: ";
		cin >> userinput;
		if (userinput == 1 || userinput == 2 || userinput == 3 || userinput == 4) //checks if valid input choice has been entered
		{
			do //goes through input choices until user input is calculated
			{
				cout << "Please enter a postitive integer: ";
				cin >> n;
				if (n < 0) //makes sure user entered a valid integer
				{
					"Please enter a positive integer: ";
				}
				else
				{
					if (userinput == 1) 
					{
						cout << n << " has " << countdigits(n) << " total digits";
					}
					else if (userinput == 2) 
					{
						cout << "The sum of the digits in the number " << n << " is " << sumDigits(n);
					}
					else if (userinput == 3) 
					{
						palchecker = isPalindrome(n);
						if (palchecker == 1) 
						{
							cout << n << " is a Palindrome\n";
						}
						else if (palchecker == 0) 
						{
							cout << n << " is not a Palindrome\n";
						}
					}
					else if (userinput == 4) 
					{
						cout << "The reverse sequence for the number " << n << " is " << reverse(n);
					}
					cout << "\n";
				}
			}
			while (n < 0); //makes sure user entered valid integer
		}
		else if (userinput == 5) //displays exit message 
		{
			cout << "Goodbye!\n";
		}
		else 
		{
			cout << "Please enter a valid input choice\n";
		}
	}
	while(userinput != 5); //checks if program needs to be terminated
}
int main()
{
	run();
	return(0);
	}