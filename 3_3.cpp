// Write a program that asks the user to enter a latitude in degrees,
// minutes, and seconds and that then displays 
// the latitude in decimal format.
// There are 60 seconds of arc to a minute and 60 minutes of arc to degree;
// represent these values with symbolic constants
// You should use a separate variable for each input value.

//3_3.cpp
#include <iostream>

using namespace std;

int main()
{
	float degree, minute, second;
	cout << "Enter a latitude in degrees, minutes, and seconds:";
	cout << "\nFirst, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;

    const int sec_per_min = 60;
    const int min_per_degree = 60;

    double result = degree + minute / min_per_degree + second / sec_per_min / min_per_degree;
    
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = ";
    cout << result << " degrees";

    return 0; 	
}