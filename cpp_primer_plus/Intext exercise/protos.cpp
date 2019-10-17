// protos.cpp -- using prototypes and funcion calls
#include <iostream>
void cheers(int);	//prototype: no return value
double cube(double x);	//prototype: returns a double 
int main()
{
	using namespace std;
	cheers(5);	//function calloc
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);	//function call 
	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " cubie feet.\n";
	cheers(cube(2));
	return 0;
}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}

double cube(double x)
{
	return x * x * x;
}