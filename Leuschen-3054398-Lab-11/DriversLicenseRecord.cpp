/* -------------------------------------
*
* File Name: DriversLicenseRecord.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 9
* Description: This program creates the methods of the Drivers License Record Class which can both gather and replace values within the elements of the DLR class.  
* Date: 5/3/2021
*
-------------------------------------------*/
#include "DriversLicenseRecord.h"
#include <string>
#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

DLR::DLR()
{
	fname = 'J';
	lname = 'S';
	age = 0; 
	voterstatus = 'Y';
	licensenumber = 0;
}
void DLR::setfname(string newfname)
{
	fname = newfname;
}
void DLR::setlname(string newlname)
{
	lname = newlname;
}
void DLR::setage(int newage)
{
	age = newage;
}
void DLR::setvoterstatus(char newvoterstatus)
{
	voterstatus = newvoterstatus;
}
void DLR::setlicensenumber(int newlicensenumber)
{
	licensenumber = newlicensenumber;
}
string DLR::getfname()
{
	return(fname);
}
string DLR::getlname()
{
	return(lname);
}
int DLR::getage()
{
	return(age);
}
char DLR::getvoterstatus()
{
	return(voterstatus);
}
int DLR::getlicensenumber()
{
	return(licensenumber);
}