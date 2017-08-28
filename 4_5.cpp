//The CandyBar structure contains three memebers. 
//The first member holds the brand name of a candy bar.
//The second member holds the weight(which may have a fraction part) of the candy bar.
//The third member holds the number of the calories(an integer value) in the candy bar.
//Write a program that declares such a structure and creates a CandyBar variable
//called snack, initializeing its members to "Mocha Munch", 2.3 and 350, respectively.
//The initialization should be part of the declaration for snack..
//Finally, the program should display the contents of the snack variable.

//4_5.cpp

#include <iostream>

int main()
{
	using namespace std;
	struct CandyBar //structure declaration
	{
		char name[20];
		float weight;
		int calories;
	} snack =         // combine the initialization and declaration
	{
		"Mocha Munch",
		2.3,
		350
	}; // snack is a structure variable of type CandyBar
	
	cout << snack.name << " " << snack.weight << " " << snack.calories << endl;
	
	return 0;
}