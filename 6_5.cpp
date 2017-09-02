//The kindom of Neutronia, where the unit of currency is the tvarp, has the following income tax code:
//First 5,000 tvarps: 0% tax
//Next 10,000 tvarps: 10% tax 
//Next 20,000 tvarps: 15% tax 
// Tvarps after 35,000: 20% tax 

//6_5.cpp

#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::cerr;
	
	double income;
	cout << "Enter your income: ";
	cin >> income;
	
	if (cin.peek() != ' ' && cin.peek() != '\n')
	{
		cerr << "Error: Invalid Input.\n";
		return -1;
	}
	else if (income < 0)
	{
		cerr << "Error: Invalid Input.\n";
		return -1;
	}
	
	int status;
	if (income >= 0 && income <= 5000)
		status = 0;
	else if (income > 5000 && income <= 15000)
		status = 1;
	else if (income > 15000 && income <= 35000)
		status = 2;
	else
		status = 3;
	
	double tax;
	switch(status)
	{
		case 3: tax = (income - 35000) * 0.2 + 4000;
			break;
		case 2: tax = (income - 15000) * 0.15 + 1000;
			break;
		case 1: tax = (income - 5000) * 0.1;
			break;
	}
	
	cout << "Your income are " << income << " tvarps," << " your tax are: " << tax << endl;
	return 0;
}