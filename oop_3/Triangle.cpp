#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
#define _USE_MATH_DEFINES

using namespace std;

Triangle::Triangle(const Triangle& triangle)
{
	this->a = triangle.a;
	this->b = triangle.b;
	this->c = triangle.c;
}

Triangle::Triangle()
{
	Triangle::Triangle(0.0, 0.0, 0.0);
}

Triangle::Triangle(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
	
}

Triangle::~Triangle()
{
	
}

double Triangle::GetA() { return a; }
double Triangle::GetB() { return b; }
double Triangle::GetC() { return c; }

void Triangle::SetA()
{
	if (a > 0)
	{
		this->a = a;
	}
}

void Triangle::SetB()
{
	if (b > 0)
	{
		this->b = b;
	}
}

void Triangle::SetC()
{
	if (c > 0)
	{
		this->c = c;
	}
}

double Triangle::Perimeter()
{
	return (a + b + c);
}

double Triangle::Area()
{
	return sqrt((((a + b + c) / 2) * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c)));
}

bool Triangle::operator < (Triangle& obj)
{ 
	return (this->Area() < obj.Area()); 
}

void Triangle::operator+=(double n)
{ 
	this->a = this->a + n;  
	this->b = this->b + n;
	this->c = this->c + n;
}

ostream& operator << (ostream& out, const Triangle& obj)
{ 
	out << "Triangle(" << obj.a << ", " << obj.b << ","<<obj.c<< ")";  
	return out; 
}

istream& operator>>(istream& in, Triangle& obj)
{
	cout << "Print a: ";
	in >> obj.a;
	if (obj.a < 0) throw ("Incorect value of 1st side!");
	cout << "Print b: ";
	in >> obj.b;
	if (obj.b < 0) throw ("Incorect value of 2nd side!");
	cout << "Print c: ";
	in >> obj.c;
	if (obj.c < 0) throw ("Incorect value of 3rd side!");
	return in;
}