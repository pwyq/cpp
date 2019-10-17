#include <iostream>

using namespace std;

int main()
{
	int number, position;
	
	cout << "Enter 2 integer: ";
	cin >> number >> position;
	
	int subs = number >> position;
	
	int result = subs % 2;
	
	if(result == 0)
	{
		cout << "The bit value of " << position << " is " << result;
	}
	else
	{
		cout << "The bit value of " << position << " is " << result;
	}
	
	return 0;
}