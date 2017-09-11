// write a program that requests the user to enter the current 
// world population and the current population of U.S.
// (of of some other nation of your choice). Store the info
// in variables of type long long. Have the program display the percent that the 
// U.S. (or other nation's) population is of the world's population.

// 3_5.cpp

#include <iostream>

using namespace std;

int main()
{
	float world_pop;
	float user_pop;
	char country[100] = {0};
	
	cout << "Calculate the percentage of a certain country that you like." << endl;
	
	cout << "Enter the world's population: ";
	cin >> world_pop;

	cout << "Enter the country you like: ";
	cin >> country;

	cout << "Enter the population of " << country << " : ";
	cin >> user_pop;
	
	
	double percent = user_pop / world_pop;
	
	float result = percent * 100;
	
	cout << percent << endl;

	cout << "The population of the " << country << " is " << result << "% of the world population.";
	
	return 0;
}