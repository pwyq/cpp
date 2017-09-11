// Write a program that reads input a word at a time until a long q is 
// wntered. The program should then report the number of words that began
// with vowels, the number that began with constants, and the number that 
// fit neither of those categories.

//answer from github!
#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
	using namespace std;
	
	string word;
	int vowel_count = 0;
	int consonant_count = 0;
	int other_count = 0;
	
	cout << "Enter words (q to quit): ";
	cin >> word;
	
	while (cin.good() && word != "q")
	{
		if (isalpha(word[0]))
		{
			if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i'|| word[0] == 'o' || word[0] == 'u')
				vowel_count++;
			else if (word[0] == 'A' || word[0] == 'E' || word[0] == 'I'|| word[0] == 'O' || word[0] == 'U')
				vowel_count++;
			else
				consonant_count++;
		}
		else
			other_count++;
		
		cin >> word;
	}

	cout << vowel_count << " words beginning with vowels\n"
		 << consonant_count << " words beginning with consonants\n"
		 << other_count << " others" << endl;

	return 0;
}