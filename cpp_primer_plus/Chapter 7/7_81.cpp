//7_81.cpp
//without using the array class
//use an ordinary array of const char * for the strings representing the 
//season names, and use an ordinary array of double for the expenses.
#include <iostream>
#include <string>

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Autumn", "Winter"};

void fill(const char *Snames[], double expense[]);
void show(const char *Snames[], double expense[]);

int main()
{
	using namespace std;
	double expense[Seasons];
	// cout << "Snames[0]: " << Snames[0] << " , *Snames[0]: " << *Snames[0] << endl;
	// cout << "Snames[1]: " << Snames[1] << endl;
	// cout << "Snames[2]: " << Snames[2] << " or " << *(Snames+2) << endl;
	// cout << "\n-------------" << endl;
	fill(Snames, expense);
	show(Snames, expense);
	return 0;
}

void fill(const char *Snames[], double expense[])
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i]  << " expenses: ";
		cin >> expense[i];
	}
}

void show(const char *Snames[], double expense[])
{
	using namespace std;
	float total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << expense[i] << endl;
		total += expense[i];
	}
	cout << "Total Expenses: $" << total << endl;
}