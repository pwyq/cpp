//compstr1.cpp -- comparing strings using arrays
#include <iostream>
#include <cstring> 		//prototype for strcmp()
int main()
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}

//If the two strings are identical, the function returns the value 0;
//If the first string precedes the second alphabetically, strcmp() returns a negative value;
//If the first string follows the second alphabetically, strcmp() returns a positive value.

//In essence = Basically