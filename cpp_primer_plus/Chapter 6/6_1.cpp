//Write a program that reads keyboard input to the @ symmbol and that echoes the 
//input except for digits, converting each uppercase character to lowercase,
// and vice versa. (Don't forget the cctype family.)

//6_1.cpp

#include <iostream>
#include <cctype>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	char ch;
	
	cout << "Enter to input. press <@> to exit: " << endl;
	cin.get(ch);
	while (ch != '@')
	{
		if (isupper(ch))
		{
			ch = char(ch+32);
			cout << ch;
		}
		else if (islower(ch))
		{
			ch = char(ch-32);
			cout << ch;
		}
		else
			cout << ch;
		cin.get(ch);
	}

	return 0;	
}