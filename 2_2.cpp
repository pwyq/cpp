//Write a program that asks for a distance in furlongs and converts it to yards.
//1 furlong is 220 yards.
//2_2.cpp

#include <iostream>
int Furlongtoyard(int); // remember to declare your function prototype

int main()
{
    using namespace std;
	int Furlong;
	
	cout << "Please enter a value in furlong: ";
	cin >> Furlong;
	int yards = Furlongtoyard(Furlong);
	cout << Furlong << " Furlong = " << yards << " yards." << endl;
	
	return 0;
}

int Furlongtoyard(int sts)
{
    return 220 * sts;
}