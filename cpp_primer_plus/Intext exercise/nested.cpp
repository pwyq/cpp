// nested.cpp -- nested loops and 2-D array
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;
	const char * cities[Cities] = 		//array of pointers
	{									//to 5 strings
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	//You could use an array of arrys of char instead of an array of pointers
	//for the strings data.
	//char citeis[Cities][25] = 
	//Or you could use string class objects
	//const string cities[Cities] = 
	
	int maxtemps[Years][Cities] = 		//2-D array 
	{
		{96, 100, 87, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
	};
	
	cout << "Maximun temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
		{
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	//cin.get();
	return 0;
}