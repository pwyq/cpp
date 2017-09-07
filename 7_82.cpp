//7_81.cpp
//without using the array class
//Use an ordinary of const char * for the strings representing the season names,
//and use a structure whose sole member is an ordinary array of double for the expenses.
//This design is similar to the basic design of the array class.
#include <iostream>
#include <string>

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Autumn", "Winter"};

struct Expenses
{
	double season_cost[Seasons];
};

void fill(const char *Snames[], double expense[]);
void show(const char *Snames[], double expense[]);

int main()
{
	using namespace std;
	Expenses cost;	//create a struct variable
	fill(Snames, expense);
	show(Snames, expense);
	return 0;
}

void fill(const char *Snames[], Expenses &cost)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i]  << " expenses: ";
		cin >> cost -> season_cost[i];
	}
}

void show(const char *Snames[], Expenses &cost)
{
	using namespace std;
	float total = 0.0;
	//cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << cost -> season_cost[i] << endl;
		total += cost -> season_cost[i];
	}
	cout << "Total Expenses: $" << total << endl;
}