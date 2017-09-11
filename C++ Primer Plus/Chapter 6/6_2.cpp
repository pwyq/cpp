// Write a program that reads keyboard input up to 10 donation values into 
// an array of double. The program should terminate input on non-numeric input
// It should report the average of the numbers and also report how many numbers in the array are larger
// than the average.

//6_2.cpp

#include <iostream>
#include <cctype>

int main()
{
	using namespace std;
	
	const int size = 10;
	double donation[size] = {};
	double input;
	
	int count = 0;
	double sum = 0;
	double average;
	
	do
	{
		cout << "Enter the #" << count+1 << " value: ";
		cin >> input;
		donation[count] = input;
		sum += donation[count];
		count++;
		if (cin.fail())
		{
			cerr << "Error! Invalid Input." << endl;
			return -1;
		}
	}while (!isalpha(input) && (count < 10));
	
	average = sum / count;
	int above_avg_count = 0;
	
	for (int i = 0; i < count; i++)
	{
		if (donation[i] > average)
			above_avg_count++;
		else
			continue;
	}
	
	cout << "The average is: " << average << ", and " << above_avg_count
		 << " socre(s) is(are) above the average." << endl;
	
	return 0;
}
