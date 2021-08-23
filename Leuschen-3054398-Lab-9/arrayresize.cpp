/* -------------------------------------
*
* File Name: arrayresize.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 9
* Description: This program gathers  a text file and array size in the command line from the user and then prompts the user to resize the array by adding or removing values. The program also allows the user to search for a specific value within the array or print the contents of the array. 
* Date: 4/17/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>
#include <string>
#include <fstream>

using namespace std;
void printmenu()
{
	cout << "Make a selection: \n1)Insert\n2)Remove\n3)Count\n4)Print\n5)Exit\n";
}
int* insert(int arr[], int& arrsize, int position, int newvalue)
{
	int* iarr = nullptr;
	iarr = new int[arrsize + 1];
	for (int i = 0; i < position - 1; i++) 
	{
		iarr[i] = arr[i];
	}
	iarr[position - 1] = newvalue;
	for (int i = position; i < arrsize + 1; i++)
	{
		iarr[i] = arr[i - 1];
	}
	arrsize = arrsize + 1;
	delete[] arr; 
	return(iarr);
}
int* del(int arr[], int& arrsize, int position)
{
	int* darr = nullptr;
	darr = new int[arrsize - 1];
	for (int i = 0; i < position - 1; i++) 
	{
		darr[i] = arr[i];
	}
	for (int i = position - 1; i < arrsize - 1; i++)
	{
		darr[i] = arr[i + 1];
	}
	arrsize = arrsize - 1;
	delete[] arr;
	return(darr);
}
int count(int arr[], int& arrsize, int target)
{
	int numofhits = 0;
	for (int i = 0; i < arrsize; i++) 
	{
		if (target == arr[i]) 
		{
			numofhits += 1;
		}
	}
	return(numofhits);
}
void print(int arr[], int arrsize)
{
	cout << "[";
	for (int i = 0; i < arrsize - 1; i++) 
	{
		cout << arr[i] << ", ";
	}
	cout << arr[arrsize - 1] << "]\n";
}
int main( int argc, char** argv)
{
	string filename;
	ifstream inFile; 
	string sarrsize;
	int arrsize = 0;
	int userchoice = 0;
	int* arr = nullptr;
	if( argc > 1)
	{
		filename = argv[1];
	}
	if( argc > 2 )
	{
		sarrsize = argv[2];
	}
	arrsize = stoi(sarrsize);
	inFile.open(filename);
	arr = new int[arrsize - 1];
	if (inFile.is_open()) 
	{
		for (int i = 0; i < arrsize; i++) 
		{
			inFile >> arr[i];
		}
		printmenu();
		do 
		{
			cout << "Choice: ";
			cin >> userchoice;
			if (userchoice == 1) 
			{
				int position;
				int newvalue;
				do
				{
					cout << "What position in the array to you want to insert a value: ";
					cin >> position;
					if (position > arrsize + 1) 
					{
						cout << "Error, please enter a valid position (1-" << arrsize + 1 << ")\n";
					}
				} while(position > arrsize + 1);
				cout << "What new number do you want in the array: ";
				cin >> newvalue;
				arr = insert(arr, arrsize, position, newvalue);
				
			}
			else if (userchoice == 2) 
			{
				int position;
				do
				{
					cout << "What position in the array to you want to delete the value: ";
					cin >> position;
					if (position > arrsize + 1) 
					{
						cout << "Error, please enter a valid position (1-" << arrsize << ")\n";
					}
				} while(position > arrsize + 1);
				arr = del(arr, arrsize, position);
			}
			else if (userchoice == 3) 
			{
				int target;
				cout << "Which number do you want to search for: ";
				cin >> target;
				cout << "Number of times " << target << " appears in the array: " << count(arr, arrsize, target) << "\n";
			}
			else if (userchoice == 4)
			{
				print(arr, arrsize);
			}
		} while (userchoice > 0 && userchoice < 5);
		
	}
	delete[] arr;
	return(0);
}
