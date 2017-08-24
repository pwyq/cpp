// write a program that asks the user to enter the number of seconds as an integer value (use type long, or, if available, long long)
// and that then displays the equivalent time in days, hours minutes, and seconds.
// Use symbolic constants to represent the number of hours in the day,
// the number of minutes in an hour, and the number of seconds in a minute.

//3_4.cpp
#include <iostream>

using namespace std;

int main()
{
	long long second;
	const int sec_per_min = 60;
	const int min_per_hr = 60;
	const int hr_per_d = 24;
	const int d_per_yr = 365;
	const int yr_per_cen = 100;
	
	cout << "Enter the number of seconds: ";
	cin >> second;
	
	long long minute = second / sec_per_min;
	long long hour = minute / min_per_hr;
	long long day = hour / hr_per_d;
	long long year = day / d_per_yr;
	long century = year / yr_per_cen;
	
    int yr_remainder = year % yr_per_cen;
	int d_remainder = day % d_per_yr;
	int hr_remainder = hour % hr_per_d;
	int min_remainder = minute % min_per_hr;
	int sec_remainder = second % sec_per_min;
	
	cout << second << " seconds = " << century << " centuries, ";
    cout << yr_remainder << " years, ";
    cout << d_remainder << " days, ";
    cout << hr_remainder << " hours, " << min_remainder << " minutes, ";
    cout << sec_remainder << " seconds";
	
	return 0;
}