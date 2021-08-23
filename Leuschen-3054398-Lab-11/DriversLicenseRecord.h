/* -------------------------------------
*
* File Name: DriversLicenseRecord.h
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 9
* Description: This program defines the Drivers License Record class and the various methods within the class.
* Date: 5/3/2021
*
-------------------------------------------*/
#ifndef DRIVERS_LICENSE_RECORD_H
#define DRIVERS_LICENSE_RECORD_H
#include <string>
using namespace std;

class DLR
{
	private:
		string fname;
		string lname;
		int age;
		char voterstatus;
		int licensenumber;
	public:
		DLR();
		void setfname(string newfname);
		void setlname(string newlname);
		void setage(int newage);
		void setvoterstatus(char newvoterstatus);
		void setlicensenumber(int newlicensenumber);
		string getfname();
		string getlname();
		int getage();
		char getvoterstatus();
		int getlicensenumber();
};
#endif