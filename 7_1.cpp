//Write a program that repeatedly asks the user to enter pairs of numbers until at least
//one of the pair is0. For each pair, the program should use a function to calculate the harmonic 
//mean of the numbers. The function should return the answer to main(), which should report the result. 
//The harmonic mean of the numbers is the inverse of the everage and can be calculated as follows:

//harmonic mean = 2.0 * x * y/(x+y)

#include <iostream>

using namespace std;

// float harmonicMean(int x, int y)
// {
	// float harmonic_mean = (2.0 * x * y) / (x + y);
	// return harmonic_mean;
// }

float harmonicMean(float x, float y)
{
	return 2.0 * x * y / (x + y);
}

int main()
{
	double x, y;
	cout << "Enter two integers: " << endl;
	// cin >> x >> y;
	// while (x != 0 && y != 0)
	// {
		// cout << "result is: " << harmonicMean(x, y) << endl;
		// cout << "Enter two integers: " << endl;
		// cin >> x >> y;
	// }
	while (cin >> x >> y && x != 0 && y != 0)
	{
		cout << "result is: " << harmonicMean(x, y) << endl;
		cout << "Enter two numbers (0 to exit): ";
	}
	
	return 0;
}