//Review Listing 4.4, using the C++ string class instead of char arrays.
//4_2.cpp

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string str1;
	string str2;
	
	cout << "Enter your name:\n";
	getline(cin, str1); // string style of getline()
	//review: cin.getline(array_name, array_size);
	//		  getline(cin, string_name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, str2);
	
	cout << "I have some delicious " << str2;
	cout << " for you, " << str1 << ".\n";
	return 0;
}