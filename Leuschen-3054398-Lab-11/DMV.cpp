/* -------------------------------------
*
* File Name: DMV.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 9
* Description: This program contains the methods corresponding to the DMV class. The methods include printing the entire directory of the DMV, printing unregistered senior drivers, printing drivers by a first initial search, and printing drivers by an id numebr search. The program contains the run method which collects user input and calls on the selected method. 
* Date: 5/3/2021
*
-------------------------------------------*/
#include "DMV.h"
#include "DriversLicenseRecord.h"
#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <cctype>

using namespace std;

DMV::DMV(string filename)
{
	ifstream inFile;
	inFile.open(filename);
	string newfname;
	string newlname;
	int newage;
	char newvoterstatus;
	int newlicensenumber;
	if (inFile.is_open())
	{
		inFile >> arrsize;
		DMVarr = new DLR[arrsize];
		for (int i = 0; i < arrsize; i++) 
		{
			inFile >> newfname;
			inFile >> newlname;
			inFile >> newage;
			inFile >> newvoterstatus;
			inFile >> newlicensenumber;
			
			DMVarr[i].setfname(newfname);
			DMVarr[i].setlname(newlname);
			DMVarr[i].setage(newage);
			DMVarr[i].setvoterstatus(newvoterstatus);
			DMVarr[i].setlicensenumber(newlicensenumber);
		}
	}
}
DMV::~DMV()
{
	delete[] DMVarr;
}
void DMV::printMenu()
{
	cout << "\nSelect an option:\n1) Print all Drivers Info\n2) Print all senior, unregistered voters\n3) Print drivers by first initial\n4) Print driver with id\n5) Quit\nEnter your choice: ";
}
void DMV::printInfo()
{
	for (int i = 0; i < arrsize; i++) 
	{
		cout << DMVarr[i].getlname() << ", " << DMVarr[i].getfname() << ", (" << DMVarr[i].getage() << "): " << DMVarr[i].getlicensenumber() << "\n";
	}
}
void DMV::printSenior()
{
	for (int i = 0; i < arrsize; i++) 
	{
		if (DMVarr[i].getage() >= 55 && DMVarr[i].getvoterstatus() == 'N') 
		{
			cout << DMVarr[i].getlname() << ", " << DMVarr[i].getfname() << ", (" << DMVarr[i].getage() << "): " << DMVarr[i].getlicensenumber() << "\n";
		}
	}
}
void DMV::printInitialSearch()
{
	char firstnameinitial;
	int checker = 0;
	cout << "What first name initial would you like to search for: ";
	cin >> firstnameinitial;
	firstnameinitial = toupper(firstnameinitial);
	for (int i = 0; i < arrsize; i++) 
	{
		if (DMVarr[i].getfname().at(0) == firstnameinitial)
		{
			cout << DMVarr[i].getlname() << ", " << DMVarr[i].getfname() << ", (" << DMVarr[i].getage() << "): " << DMVarr[i].getlicensenumber() << "\n";
			checker += 1;
		}
	}
	if (checker == 0)
	{
		cout << "No record found.\n";
	}
}
void DMV::printIDSearch()
{
	int useridinput;
	int checker = 0;
	cout << "What license ID number would you like to search for: ";
	cin >> useridinput;
	while (cin.fail())
		{
			cin.clear();
			
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Sorry, your input did not seem to be an integer. Try again: ";
			cin >> useridinput;
			
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for (int i = 0; i < arrsize; i++) 
	{
		if (DMVarr[i].getlicensenumber() == useridinput)
		{
			cout << DMVarr[i].getlname() << ", " << DMVarr[i].getfname() << ", (" << DMVarr[i].getage() << "): " << DMVarr[i].getlicensenumber() << "\n";
			checker += 1;
		}
	}
	if (checker == 0)
	{
		cout << "No record found.\n";
	}
}
void DMV::run()
{
	int userinput;
	do 
	{
		printMenu();
		cin >> userinput;
		while (cin.fail())
		{
			cin.clear();
			
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Sorry, your input did not seem to be an integer. Try again: ";
			cin >> userinput;
			
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (userinput == 1) 
		{
			printInfo();
		}
		else if (userinput == 2)
		{
			printSenior();
		}
		else if (userinput == 3)
		{
			printInitialSearch();
		}
		else if (userinput == 4)
		{
			printIDSearch();
		}
		else if (userinput < 1 || userinput > 5) 
		{
			cout << "Please enter a valud input choice\n";
		}
	} while (userinput != 5);
}