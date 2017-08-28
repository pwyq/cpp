//use string objects and methods from the string header file to re-do practise
//problem 4_3.

//4_4.cpp

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	
	string first_name;
	string last_name;
	string full_name; // or you can make declaration and assignment in one command
					  // just like int integer = 3.14;
	
	cout << "Enter your first name: ";
	getline(cin, first_name);
	cout << "Enter your last name: ";
	getline(cin, last_name);
	
	full_name = last_name + ", " + first_name;
	
	cout << "Here's the information in a single string: " << full_name << endl;
	
	return 0;
}