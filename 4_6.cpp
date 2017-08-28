//Write a program that creates an array of three CandyBar structures, initializes them 
//to values of your choice, and then displays the contents of each structures.

//4_6.cpp

#include <iostream>
struct CandyBar
{
	char name[20];
	float weight;
	int calories;
};

int main()
{
	using namespace std;
	CandyBar snack[3] = // initializing an array of structs 
	{
		{"Da Bai Tu", 1.1, 200},
		{"Wang Wang", 2.3, 210},
		{"Niu rou Gan", 3.4, 500}
	};
	
	for(int i = 0; i < 3; i++)
		cout << snack[i].name << " " << snack[i].weight << " " << snack[i].calories << endl;
	return 0;
}