//5_1.cpp
//Write a program that requests the user to enter two integers.
//The program should then calculate and report the sum of all the integers between and including 
//the two integers. At this point, assume that the smaller integer is entered first.
//For example, if the user enters 2 and 9, the program should report that the sum of
//all integers from 2 through 9 is 44.

#include <iostream>

int main()
{
	using namespace std;
	int x, y;
	cout << "Enters two integers from small to large: ";
	cin >> x >> y;
	
	int sum = 0;
	int sub;
	sub = y - x + 1;
	sum = (x + y) * sub / 2;
	
	cout << "The sum of all integers from " << x << " through " << y
		 << " is " << sum << endl;
	return 0;
}
//I know it require using loop in this Chapater, but I just can't help 
//myself use a quick way to finish this.