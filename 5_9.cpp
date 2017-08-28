//Write a program that matches the description of the exercise 8,
//but use a string class object instead of an array.
//Include the string header file and use a relational operator to make
//the comparison test.

#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;
	
	string input;
	
	cout << "Enter words (to stop, type the word done):\n";
	int count = 0;
	
	while (cin >> input && input != "done")
	{
		++count;
		//maybe need a
		//cin >> input; No, you don't need it.
	}
	cout << "You entered a total of " << count<< " words." << endl;
	return 0;
}