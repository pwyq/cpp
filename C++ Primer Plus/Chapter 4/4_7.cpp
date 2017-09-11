//Name of the pizza company, which can consist of more than one word
//The diameter of the pizza
//The weight of the pizza 
//Devise a structure that can hold this information and write a program that uses a 
//structure variable of that type. The program should ask the user to enter each
//of the preceding items of information, and then the program should display that 
//information. Use cin (or its methods) and cout.

#include <iostream>

struct Pizza
{
	char name[20];
	float diameter;
	float weight;
};

int main()
{
	using namespace std;
	Pizza pie;
	
	cout << "What is the name of the pizza company? ";
	cin.getline(pie.name, 20);
	cout << "What is the diameter of the pizza? ";
	cin >> pie.diameter;
	cout << "What is the weight of the pizza? ";
	cin >> pie.weight;
	
	cout << "The name of the pizza compnay is " << pie.name << endl
		 << "The diameter is " << pie.diameter << endl
		 << "The weight is " << pie.weight << endl;
	return 0;
}