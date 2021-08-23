/* -------------------------------------
*
* File Name: DMV.h
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 9
* Description: This program creates the DMV class with initial values for the size of the DMV array and a pointer to the DMV array. The class also establishes the various methods used within the DMV class. 
* Date: 5/3/2021
*
-------------------------------------------*/
#ifndef DMV_H
#define DMV_H
#include <string>
#include "DriversLicenseRecord.h"

using namespace std;

class DMV
{
	public:
		int arrsize = 0;
		DLR* DMVarr = nullptr;
		DMV(string filename);
		~DMV();
		void printMenu();
		void run();
		void printInfo();
		void printSenior();
		void printInitialSearch();
		void printIDSearch();
	
	
};
#endif