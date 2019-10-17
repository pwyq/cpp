// calling.cpp -- defining, prototyping, and calling a function
#include <iostream>

void simple();		//funciton prototype

int main()
{
	using namespace std;
	cout << "main() will call the simple() function: \n";
	simple();	//function call
		cout << "main() is finished with the simple() funciton.\n";
	//cin.get();
	return 0;
}

//funciton definition
void simple()
{
	//using namespace std;
	std::cout << "I'm but a simple function.\n";
}