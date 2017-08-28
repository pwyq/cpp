//Do programming Exercise 5 but use a two-dimensional array to store input for
//3 years of monthly sales. Report the total sales for each individual year and for the 
//combined year.

#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	const int years = 3;
	const int months = 12;
	int month_sale[months] = {};
	
	const char * month_name[months] = // array of pointers
	{
		"January", "February", "March", "April", "May", "June", "July",
		"August", "September", "October", "November", "December"
	};
	
	int sale_table[years][months] = 
	{
		{},
		{},
		{}
	};
	
	for (int year = 0; year < years; year++)
	{
		for (int month = 0; month < months; month++)
		{
			cout << "The sale for year " << year+1 << " "
				 << month_name[month] << ": ";
			cin >> sale_table[year][month];
			cout << endl;
		}
	}
	
	int total_sale[years] = {};
	for (int year = 0; year < years; year++)
	{
		for (int month = 0; month < months; month++)
		{
			total_sale[year] += sale_table[year][month];
		}
		cout << "Year " << year+1 << " sale is: " << total_sale[year];
		cout << endl;
	}
	int all = 0;
	all = total_sale[0] + total_sale[1] + total_sale[2]; 
	
	cout << "Total sale of three years is: " << all << endl;
	
	return 0;
}