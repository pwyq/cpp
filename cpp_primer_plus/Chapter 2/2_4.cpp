//Write a program that asks the user to enter his or her age. The program then should display the age in months
//2_4.cpp

#include <iostream>
int yeartomonth(int); // function prototype

int main()
{
	using namespace std;
	int age_year;
	
	cout << "Enter your age: ";
	cin >> age_year;
	
	cout << endl;
	
	int age_months = yeartomonth(age_year);
	cout << "Your age in months is " << age_months << "." << endl;
	
	return 0;
}

int yeartomonth(int sts)
{
	return sts * 12;
}