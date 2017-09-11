//You sell the book C++ for Fools. 
//Write a program that you enter a year's worth of monthly sales (in terms of number
// of books, not of money). The program should use a loop to promp you by month, using
// an array of char * (or an array of string objects, if you prefer) initialized to the 
//month strings and storing the input data in an array of int. Then, the program should
//find the sum of the array contents and report the total sales for the year.

#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	const int arrSize = 12;
	
	int month_sale[arrSize] = {};
	
	const char * months[arrSize] = // array of pointers
	{
		"January", "February", "March", "April", "May", "June", "July",
		"August", "September", "October", "November", "December"
	};
	
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Enters the sale of " << months[i] << ": ";
		cin >> month_sale[i];
	}
	cout << endl;
	
	int total_sale = 0;
	
	for (int i = 0; i < arrSize; i++)
		total_sale += month_sale[i];
	
	cout << "The total sale of this year is: " << total_sale << endl;
	
	return 0;
}