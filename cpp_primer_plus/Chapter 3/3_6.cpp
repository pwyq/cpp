// write a program that asks how many miles you have driven and how many
// gallons of gasoline you have used and then reports the miles per gallons
// your car has gotten.

//3_6.cpp
#include <iostream>

using namespace std;

int main()
{
	float mile;
	float gallon;
	
	cout << "Enter the mile you have driven: ";
	cin >> mile;
	cout << "Enter the gasoline you have used: ";
	cin >> gallon;
	
	float gas_per_mile = mile / gallon;
	
	cout << "You car use " << gas_per_mile << " gasoline per mile.";
	
	return 0;
}