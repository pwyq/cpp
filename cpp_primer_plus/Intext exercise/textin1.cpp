// textin1.cpp -- reading chars witha while loop
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;		// use basic input 
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;
	while (ch != '#')
	{
		//cout << ch;
		++count;
		cin >> ch; // vital! get the next character, but will skip spaces
	}
	cout << endl << count << " characters read\n";
	return 0;
}