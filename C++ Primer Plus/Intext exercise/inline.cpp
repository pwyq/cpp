//inline.cpp -- using an inline function

#include <iostream>

//an inline function definition
inline double square(double x) {return x * x;}

int main()
{
	using namespace std;
	double a, b;
	double c = 13.0;
	
	a = square(5.0);
	b = square(4.5 + 7.5);	//can pass expressions
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c dquared = " << square(c++) << endl;
	cout << "Now c = " << c << "\n";
	return 0;
}