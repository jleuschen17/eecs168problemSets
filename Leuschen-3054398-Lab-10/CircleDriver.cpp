#include "Circle.h"
#include "CircleDriver.h"
#include <math.h>
#include <iostream>
using namespace std;

void CircleDriver::obtainCircles()
{
	cout << "\nEnter information for Circle 1:\n";
	cout << "Radius: ";
	cin >> circ1.radius;
	cout << "X Position: ";
	cin >> circ1.xpos;
	cout << "Y Position: ";
	cin >> circ1.ypos;
	
	cout << "\nEnter information for Circle 2:\n";
	cout << "Radius: ";
	cin >> circ2.radius;
	cout << "X Position: ";
	cin >> circ2.xpos;
	cout << "Y Position: ";
	cin >> circ2.ypos;
}
void CircleDriver::printCircleInfo()
{
	cout << "\nInformation for Circle 1:\n";
	cout << "location: (" << circ1.xpos << ", " << circ1.ypos << ")\n";
	cout << "diameter: " << circ1.diameter() << "\n";
	cout << "area: " << circ1.area() << "\n";
	cout << "circumference: " << circ1.circumference() << "\n";
	cout << "distance from the origin: " << circ1.DistanceToOrigin() << "\n\n";	
	
	cout << "\nInformation for Circle 2:\n";
	cout << "location: (" << circ2.xpos << ", " << circ2.ypos << ")\n";
	cout << "diameter: " << circ2.diameter() << "\n";
	cout << "area: " << circ2.area() << "\n";
	cout << "circumference: " << circ2.circumference() << "\n";
	cout << "distance from the origin: " << circ2.DistanceToOrigin() << "\n\n"; 
	
	if (circ1.intersect(circ2) == 1)
	{
		cout << "The circles intersect.\n";
	}
	else 
	{
		cout << "The circles do not intersect.\n";
	}
}
void CircleDriver::run()
{
	obtainCircles();
	printCircleInfo();
}