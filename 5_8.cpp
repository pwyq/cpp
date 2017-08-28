//Write a program that uses an array of char and a loop to read one word at a time
//until the word done is entered. The program should then report the number of 
//words entered (not counting done). A sample run could look like this:
//Enter words (to stop, type the word done):
//anteater birthday category dumpster
//envy finger geometry done for sure
//You entered a total of 7 words.

#include <iostream>
#include <cstring>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	const int arrSize = 100;
	char input[arrSize] = {};
	int count = 0;
	
	cout << "Enter words (to stop, type the word done):\n";

	while (cin >> input && strcmp("done", input)) // string compare! strcmp will return 0(false) if the two strings are the same
		++count;
	
	
	cout << "\nYou entered a total of " << count << " words." << endl;
	return 0;
}