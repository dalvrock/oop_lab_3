#pragma once
#include <iostream>

using namespace std;


class Triangle
{
private:
	double a, b, c;
public:
	Triangle();
	Triangle(double a, double b, double c);
	Triangle(const Triangle& triangle);
	~Triangle();

	double GetA();
	double GetB();
	double GetC();

	void SetA();
	void SetB();
	void SetC();

	double Perimeter();
	double Area();

	bool operator < (Triangle& obj);
	void operator += (double);
	friend ostream& operator << (ostream& out, const Triangle& obj);
	friend istream& operator >> (istream& in, Triangle& obj);
};

