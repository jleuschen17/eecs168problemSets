/* -------------------------------------
*
* File Name: 2darray.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 7
* Description: This program will read a file and gather the dimensions and contents of a 2d array. The program will then write 3 different files with altered patterns of the originao array and one more diagonal pattern if the array is symmetric. 
* Date: 4/5/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	cout.precision(1);
	cout << fixed;
	
	int rowsize = 0;
	int columnsize = 0; 
	
	double total = 0;
	double totalaverage = 0;
	double* rowtotal = nullptr;
	double* rowaverage = nullptr;
	
	string filename;
	
	double** grid = nullptr;
	double** reversegrid = nullptr;
	double** flippedgrid = nullptr; 
	double** diagonalgrid = nullptr;
	
	ifstream inFile;
	ofstream ofileA;
	ofstream ofileR;
	ofstream ofileF;
	ofstream ofileD;
	
	string afilename = "averages.txt";
	string rfilename = "reverse.txt";
	string ffilename = "flipped.txt";
	string dfilename = "diagonal.txt";
	
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
	inFile >> rowsize;
	inFile >> columnsize;
	
	grid = new double*[rowsize];
	reversegrid = new double*[rowsize];
	flippedgrid = new double*[rowsize];
	diagonalgrid = new double*[rowsize];
	
	rowtotal = new double[rowsize];
	rowaverage = new double[rowsize];
	
	rowtotal[0] = 0;
	for (int i = 0; i < rowsize; i++)
	{
		grid[i] = new double[columnsize];
		reversegrid[i] = new double[columnsize];
		flippedgrid[i] = new double[columnsize];
		diagonalgrid[i] = new double[columnsize];
	}
	for (int i = 0; i < rowsize; i++) 
	{
		for (int j = 0; j < columnsize; j++) 
		{
			inFile >> grid[i][j];
			total = total + grid[i][j];
			rowtotal[i] = rowtotal[i] + grid[i][j];
		}
	}
	totalaverage = total / (rowsize * columnsize);
	for (int i = 0; i < rowsize; i++) 
	{
		rowaverage[i] = rowtotal[i] / columnsize;
	}
	
	ofileA.open(afilename);
	ofileR.open(rfilename);
	ofileF.open(ffilename);
	
	ofileA << "Total average: " << totalaverage << "\n";
	for (int i = 0; i < rowsize; i++) 
	{
		ofileA << "Row " << i + 1 << " average: " << rowaverage[i] << "\n";
	}
	
	for (int i = 0; i < rowsize; i++) 
	{
		for (int j = 0; j < columnsize; j++) 
		{
			reversegrid[i][j] = grid[i][columnsize - j - 1];
			flippedgrid[i][j] = grid[rowsize - i - 1][j];
			
			ofileR << reversegrid[i][j];
			ofileR << " ";
			ofileF << flippedgrid[i][j];
			ofileF << " ";
		}
			ofileR << "\n";
			ofileF << "\n";
	}
	
	if (rowsize == columnsize) 
	{
		ofileD.open(dfilename);
		for (int i = 0; i < rowsize; i++) 
		{
			for (int j = 0; j < columnsize; j++) 
			{
				diagonalgrid[i][j] = grid[j][i];
				ofileD << diagonalgrid[i][j];
				ofileD << " ";
			}
			ofileD << "\n";
		}
		ofileD.close();
	}
	
	delete[] grid;
	delete[] rowtotal;
	delete[] rowaverage;
	delete[] reversegrid;
	delete[] flippedgrid;
	delete[] diagonalgrid;
	inFile.close();
	ofileA.close();
	ofileR.close();
	ofileF.close(); 
}