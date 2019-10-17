//Write a program tat uss three user-defined functions (main() counted as one) and produces certain output
//2_3.cpp

#include <iostream>
char sentence_1(void);
char sentence_2(void);

using namespace std;

int main()
{
    char one = sentence_1();
	cout << endl;
	char two = sentence_2();
}

char sentence_1(void)
{
    cout << "Three blind mice\nThree blind mice";
}

char sentence_2(void)
{
	cout << "See how they run\nSee how they run";
}