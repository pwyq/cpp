//Do Programming Exercise 6, but instead of declaring an array of three
//CandyBar structures, use new to allocate the array dynamically.

#include <iostream>
#include <cstring>

struct CandyBar
{
	char name[20];
	float weight;
	int calories;
};

int main()
{
	using namespace std;
	
	CandyBar * snacks = new CandyBar [3];
	
	strcpy(snacks->name, "Da Bai Tu");
	snacks->weight = 2.34;
	snacks->calories = 230;
	
	strcpy((snacks+1)->name, "Wang wang");
	(snacks+1)->weight = 23.4;
	(snacks+1)->calories = 499;
	
	strcpy((snacks+2)->name, "Niu Rou Gan");
	(snacks+2)->weight = 2.4;
	(snacks+2)->calories = 200;
	
	for(int i = 0; i < 3; i++)
	{
		cout << snacks[i].name << " "
			 << snacks[i].weight << " "
			 << snacks[i].calories << " ";
		cout << endl;
	}
	
	
	delete [] snacks; //don't forget the bracket
	return 0;
}