//Write a program that asks the user to enter an hour value and a minute value.
//The main() function should then pass these two values to a type void function that 
//displays the two values in the format shown in the following sample run.
//2_7.cpp

#include <iostream>
void display(int, int); 

using namespace std;

int main()
{
	int hours;
	int minutes;
	
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	
	display(hours, minutes);
	
	return 0;
}

void display(int a, int b)
{
	if (b < 10)
	{
		cout << "Time: " << a << ":0" << b;
	}
	else
	{
        cout << "Time: " << a << ":" << b;		
	}

}