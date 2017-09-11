//5_2.cpp
//Redo Listing 5.4 using a type array object insteaf of a build-in array and type
//long double instead of long long. Find the value of 100!

#include <iostream>
// actually, I would like to use tgamma() function in cmath library
#include <cmath>
#include <array> // include this to allow the usage of array

int main()
{
	using namespace std;
	array<long double, 100> fact;
	
	fact[0] = 1L; // add L at the end make the type becomes long double.
	
	for (long double i = 1L; i < 100L; i++)
	{
		fact[i] = i * fact[i-1];	
	}
	
	cout << fact[0] << endl;
	cout << fact[1] << endl;
	cout << fact[2] << endl;
	cout << fact[3] << endl;
	cout << fact[9] << endl;
	cout << fact[99] << endl;
	
	cout << tgamma(10) << endl;
	cout << tgamma(100) << endl;
		
}