// textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
	using namespace std;
	char ch; int count = 0;
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);	//attemp to read another char 
	}
	cout << endl << count << " characters read\n";
	return 0;
}

//in the console, 
//textin3.exe < stuff.txt
//Then it will automatically read the words from the stuff.txt file!
//amazing!