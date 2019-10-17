//Write a program that has main() call a user-defined funciton that takes a
//Celsius temperature value as an argument an dthen returns the equivalent Fahrenheit value.
//The program should request the Celsius value as input form the user and display the result.
//2_5.cpp

#include <iostream>

int CtoF(int);

int main()
{
	using namespace std;
	
	int Celsius;
	cout << "Please enter a Celsius value: ";
	cin >> Celsius;
	
	cout << endl;
	
	int Fahrenheit = CtoF(Celsius);
	cout << Celsius << " degrees Celsius is " << Fahrenheit << " degress Fahrenheit.";
	
	return 0;
}

int CtoF(int sts)
{
	return sts * 1.8 + 32;
}