//Do programming Exercise 7 but use new to allocate a structure instead of declaring a 
//structure variable. Also have the program request the pizza diameter before it 
//requests the pizza company name.

//4_8.cpp

#include <iostream>

struct pizza
{
	char name[20];
	float diameter;
	float weight;
};

int main()
{
	using namespace std;
	
	pizza * pie = new pizza;
	
	cout << "What is the diameter of the Pizza? ";
	cin >> pie->diameter;
	cin.get();
	cout << "What is the company name of the Pizza? ";
	cin.getline(pie->name, 20);
	cout << "What is the weight of the Pizza? ";
	cin >> pie->weight;
	
	cout << pie->name << " " << pie->diameter << " " << pie->weight << endl;
	
	delete pie; // IMPORTANT!!! every new must match a delte!
	
	return 0;
}