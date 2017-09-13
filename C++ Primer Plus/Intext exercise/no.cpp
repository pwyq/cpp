#include<iostream>

using namespace std;

int main()
{
	int number;
	int position;
	int result;
	cout << "Enter two integer numbers (each seperated by a space): ";
	cin >> number >> position;
	
	for (int n = 0; n <= position; n++)
	{
		result = number % 2;
		if ((number - 1) % 2 == 0)
		{
			number = (number - 1) / 2;
		}
		else number = number / 2;
		
	}
	cout << "The value of Bit " << position <<" is "<< result << endl;
	return 0;
}