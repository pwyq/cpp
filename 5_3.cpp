// Write a program that asks the user to type in numbers. After each entry, the
//program should report the cumulative sum of the entries to date. The program should
//terminate when the user enters 0.

#include <iostream>

int main()
{
	using namespace std;
	
	int input;
	cout << "Enter numbers: ";
	cout << "(Enter 0 to terminate.)";
	cin >> input;
	
	int sum = 0;
	
	while (cin.good() & input != 0)
	{
		sum += input;
		cout << "The sum now is: " << sum << endl;
		
		cin >> input;
	}
	
	if (cin.fail() && cin.peek() != ' ' && cin.peek() != '\n')
		cerr << "Error: Invalid Input." << endl;
	return 0;
}