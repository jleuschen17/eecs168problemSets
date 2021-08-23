#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	public:
	Circle();
	//member variables
	double radius;
	double xpos;
	double ypos;
	
	//member methods
	double diameter();
	double area();
	double circumference();
	double DistanceToOrigin();
	bool intersect(Circle otherCircle);
	
};
#endif