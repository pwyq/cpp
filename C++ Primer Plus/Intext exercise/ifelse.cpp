// ifelse.cpp -- using the if else statement
#include <iostream>
int main()
{
	char ch;
	
	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;	//done if newline
		else
			std::cout << ++ch;	//done otherwise
		std::cin.get(ch);
	}
	//try ch + 1 instead of ++ch for interesting effect
	//Nah, cout will convert ch+ 1 wo int type, so it will finally output 
	//a list of integers.
	std::cout << "\nPlease excuse the slight confusion.\n";
	return 0;
}