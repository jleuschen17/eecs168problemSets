/* -------------------------------------
*
* File Name: main.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 9
* Description: This program validates if the user inputted a valid file name and if creates a DMV objects and calls the run() function. 
* Date: 5/3/2021
*
-------------------------------------------*/
#include <iostream>
#include <string>
#include <fstream>
#include "DriversLicenseRecord.h"
#include "DMV.h"

using namespace std;
int main(int argc, char** argv)
{
	string filename;
	if (argc > 1)
	{
		filename = argv[1];
		DMV myDMV(filename);
		myDMV.run();
	}
	else 
	{
		cout << "Error, insufficent number of arguments!\n";
	}
	return(0);
}