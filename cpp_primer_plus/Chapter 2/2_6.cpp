//Write a program that has main() call a user-defined function that takes a 
//distance in light years a an argument and then returns the distance in 
//astronomical units.
//An astronomical unit is the average distance from the earth to the sun (about 150M km)
//1 light year = 63,240 astronomical units
//2_6.cpp

#include <iostream>

int lytoastron(int);

int main()
{
	using namespace std;
	
	int light_year;
	cout << "Enter the number of light years: ";
	cin >> light_year;
	cout << endl;
	
	int astro = lytoastron(light_year);
	cout << light_year << " light years = " << astro << " astronomical units.";
	
	return 0;
}

int lytoastron(int sts)
{
	return sts * 63240;
}