/* -------------------------------------
*
* File Name: readwrite.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 6
* Description: This program will request a 
file input from a user and then store values within the file into an array. The program will then write two new files with a normalized and reversered arrays.
* Date: 3/29/2021
*
-------------------------------------------*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int arraysize = 0;
	double* original = nullptr;
	double* normalized = nullptr;
	double* reversed = nullptr;
	string filename;
	ifstream inFile;
	ofstream myOutFileN;
	ofstream myOutFileR;
	string normalfilename = "Normalized.txt";
	string reversedfilename = "Reversed.txt";
	int checker = 0;
	while (checker == 0) //loops user until file is open
	{
		cout << "Enter a File name: ";
		cin >> filename;
		inFile.open(filename);
		if (inFile.is_open()) //ensures file has been opened 
		{
			checker = 1;
		}
	}
	inFile >> arraysize;
	original = new double[arraysize]; //array that gathers information from input.txt file
	normalized = new double[arraysize]; //normalkzed array
	reversed = new double [arraysize]; //reversed array
	for (int i = 0; i < arraysize; i++) //gathers values from input.txt file
	{
		inFile >> original[i];
	}
	for (int i = 0; i < arraysize; i++) //copies values to new array which will be used for normalization
	{
		normalized[i] = original[i];
	}
	for (int i = 0; i < arraysize; i++) //copies values to new array which will be used for reversal
	{
		reversed[i] = original[i];
	}
	double max = normalized[0];
	double min = normalized[0];
	
	for (int i = 1; i < arraysize; i++) //finds min and max values of the array
	{
		if (normalized[i] > max) 
		{
			max = normalized[i];
		}
		if (normalized[i] < min) 
		{
			min = normalized[i];
		}
	}
	
	for (int i = 0; i < arraysize; i++) //normalize array values
	{
		normalized[i] = ((normalized[i] - min) / (max - min));
	}
	
	for (int i = 0; i < arraysize; i++) //reverse array values
	{
		reversed[i] = original[arraysize - 1 - i];
	}
	myOutFileN.open(normalfilename); //create new file for normalized values
	myOutFileN << "Original Array: [";
	for (int i = 0; i < arraysize - 1; i++) //add original array to Normalized txt file
	{
		myOutFileN << original[i] << ", ";
	}
	myOutFileN << original[arraysize - 1] << "]\n";
	myOutFileN << "Normalized Array: [";
	for (int i = 0; i < arraysize - 1; i++) //add normalized array to normalized txt file
	{
		myOutFileN << normalized[i] << ", ";
	}
	myOutFileN << normalized[arraysize - 1] << "]\n";
	
	myOutFileR.open(reversedfilename); //create new file for reversed values
	myOutFileR << "Original Array: [";
	for (int i = 0; i < arraysize - 1; i++) //add original array to reversed array txt file
	{
		myOutFileR << original[i] << ", ";
	}
	myOutFileR << original[arraysize - 1] << "]\n";
	myOutFileR << "Reversed Array: [";
	for (int i = 0; i < arraysize - 1; i++) //add reversed array to reversed array txt file
	{
		myOutFileR << reversed[i] << ", ";
	}
	myOutFileR << reversed[arraysize - 1] << "]\n";
	
	delete[] normalized; //delete all heap allocated arrays
	delete[] original;
	delete[] reversed;
	inFile.close(); //close all files
	myOutFileN.close();
	myOutFileR.close();
	return(0);
}