// Write a precursor to a menu-driven program. The program should display
// a menu offering four choices, each labeled witha letter. If the user
// responds with a letter other than one of the four valid choices, the 
// program should prompt the user to enter a valid response until the user 
// compilers. Then the program should use a switch to select a simple action
// based on the user's selection. A program run could look something like this:
//Please enter one of the following choices:
//c) carnivore		d) pianist
//t) tree			g) game
//f
//Please enter a c, p, t, or g: q
//Please enter a c, p, t, or g: t
//A maple is a tree.

//6_3.cpp

#include <iostream>
using namespace std;
void showmenu();
void report();

int main()
{
	showmenu();
	char choice;
	cin >> choice;
	while (choice != 'q')
	{
		switch(choice)
		{
			case 'c' : cout << "\nWhat is a carnivore? Do you know?\n";
				break;
			case 'd' : cout << "\nWow, amazing! You play piano!\n";
				break;
			case 't' : cout << "\nA maple is a tree.\n";
				break;
			case 'g' : report();
				break;
			default : cout << "\nThat's not a choice.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Ending..." << endl;
	return 0;
}

void showmenu()
{
	cout << "\nPlease enter one of the following choices:\n"
			"c) carnivore		d) pianist\n"
			"t) tree			g) game\n"
			"q) quit\n";
}

void report()
{
	cout << "Do you wanna play a small game~"
		 << "\nCome on~ Let's go and play~\n";
}