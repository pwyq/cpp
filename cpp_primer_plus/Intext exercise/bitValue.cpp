// test.cpp
// this solution keeps every remainder we have
#include <iostream>

using namespace std;

int main()
{
	int number, position, remainder;
	int subs;
	int arr[32] = {0};
	
	cout << "Enter two integer numbers (each separated by a space): ";
	cin >> number >> position;
	
	for (int i = 0; number >= 1; i++)
	{
		subs = number; // temporarily store the variable number 
		number = number / 2;
		remainder = subs % 2;
		arr[i] = remainder;
	}
	
	cout << "The value of Bit " << position << " is " << arr[position];
	
	return 0;
}