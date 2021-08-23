#include "Circle.h"
#include <math.h>

Circle::Circle()
{
	radius = 0;
	xpos = 0;
	ypos = 0;
}
double Circle::diameter()
{
	double diameter = 0; 
	diameter = 2 * radius;
	return(diameter);
}
double Circle::area()
{
	double area = 0;
	area = 3.14159 * radius * radius;
	return(area);
}
double Circle::circumference()
{
	double circumference = 0;
	circumference = 3.14159 * radius * 2;
	return(circumference);
}
double Circle::DistanceToOrigin()
{
	double distance = 0;
	distance = sqrt(pow(xpos, 2) + pow(ypos, 2));
	return(distance);
}
bool Circle::intersect(Circle otherCircle)
{
	double distance_between = 0;
	bool intersect;
	distance_between = sqrt(pow(xpos - otherCircle.xpos, 2) + pow(ypos - otherCircle.ypos, 2));
	if (distance_between < radius + otherCircle.radius && distance_between > abs(radius - otherCircle.radius))
	{
		intersect = true;
	}
	else 
	{
		intersect = false;
	}
	return(intersect);
}