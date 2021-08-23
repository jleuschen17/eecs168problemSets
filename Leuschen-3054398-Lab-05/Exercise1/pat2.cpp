/* -------------------------------------
*
* File Name: pat2.cpp
* Author: Joe Leuschen
* Assignment: EECS-168/169 Lab 55
* Description: This program can display a variety of patterns given a specific size. The patterns include a checkerboard, rook path, running total, upper left triangle, and a upper right triangle.
* Date: 3/22/2021
*
-------------------------------------------*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int xposition = 0; 
	int yposition = 0; 
	char quitresponse = 'n';
	
	cout << "1) Checkerboard\n";
	cout << "2) Rook Path\n";
	cout << "3) Running Total\n";
	cout << "4) Upper Left Triangle\n";
	cout << "5) Upper Right Triangle\n";
	
	for (int patternresponse = 0; quitresponse == 'n'|| quitresponse == 'N';)
	{
		cout << "\nInput a choice: ";
		cin >> patternresponse;
		if (patternresponse > 5 || patternresponse < 1) 
		{
			cout << "Error\n";
		}
		else 
		{
			for (int size = 0; size <=3;)
			{
				cout << "\nInput a size ";
				cin >> size;
				
				if (size <=3)
				{
					cout << "Error\n";
				}
				else 
				{
					if (patternresponse == 1) 
					{
							for (int i = 0; i < size; i++)
							{
								for (int j = 0; j < size; j++) \
								{
									if ((i+j) % 2 == 0) 
									{
										cout << "O";
									}
									else 
									{
										cout << "X";
									}
								}
								cout << "\n";
							}
				
					}
					else if (patternresponse == 2) 
					{
						cout << "x-position: ";
						cin >> xposition;
						cout << "y-position: ";
						cin >> yposition;
						if (xposition >= 0 && xposition < size && yposition >= 0 && yposition < size)
						{
							for (int i = 0; i < size; i++)
							{
								for (int j = 0; j < size; j++)
								{
									if (j == xposition - 1 && i == yposition - 1) 
									{
										cout << "R";
									}
									else if (j == xposition - 1) 
									{
										cout << "|";
									}
									else if (i == yposition - 1)
									{
										cout << "-";
									}
									else 
									{
										cout << "*";
									}
								}
								cout << "\n";
							}
						}
						else 
						{
							cout << "Error\n";
						}
					}
					else if (patternresponse == 3) 
					{
						for (int i = 0; i < size; i++) 
						{
							for (int j = 0; j < size; j++) 
							{
								cout << (j + (i * size)) + 1 << ", "; 
							}
							cout << "\n";
						}
					}
					else if (patternresponse == 4)
					{
						for (int i = 0; i < size; i++) 
						{
							for (int j = i; j < size; j++) 
							{
								cout << "*";
							}
							cout << "\n";
						}
					}
					else if (patternresponse == 5) 
					{
						for (int i = 0; i < size; i++) 
						{
							for (int j = 1; j < size + 1; j++)
							{
								if (j > i) 
								{
									cout << "*"; 
								}
								else 
								{
									cout << " ";
								}
							}
							cout << "\n";
						}
					}
				}
			}
		}
		if (patternresponse >= 1 && patternresponse <= 5)
		{
			cout << "Do you want to quit (y/n)?: ";
			cin >> quitresponse;
		}
	}
	std::cout << "Goodbye...\n";
}