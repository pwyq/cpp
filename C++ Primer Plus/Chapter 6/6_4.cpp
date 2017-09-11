// Write a program that can list members by real name, by job title, 
// by secret name, or by a member's preference.
//Based the program on the following structure:
//Benevolent Order of Programmers name structure
//struct bop{
//	char fullname[strsize]; // real name
// char title[strsize[;	//job title
// char bopname[strsize];	//secret BOP name
// int preference;// 0 = fullname, 1 = title, 2 = bopname};


//6_4.cpp

#include <iostream>

using namespace std;

void showmenu();

int main()
{
	showmenu();
	
	const int strsize = 100;

	struct bop {
		char fullname[strsize]; // real name
		char title[strsize];	//job title
		char bopname[strsize];	//secret BOP name
		int preference;// 0 = fullname, 1 = title, 2 = bopname
	};
	
	bop sth = {
		"\nWimp Macho\nRaki Rhodes\nCelia Laiter\nHoppy Hipman\nPat Hand",
		"\nWimp Macho\nJunior Programmer\nMIPS\nAnalyst Trainee\nLOOPY",
		"\n#6174\n#9997\n#1314\n2016",
		0
	};
	
	char choice;
	cout << "Enter your choice: ";
	cin >> choice;

	while (choice != 'q')
	{
		switch(choice)
		{
			case 'a' : cout << sth.fullname;
				break;
			case 'b' : cout << sth.title;
				break;
			case 'c' : cout << sth.bopname;
				break;
			case 'd' : if (sth.preference == 0)
					{
						cout << "Now display by name.\n";
						cout << sth.fullname;
					}
						else if (sth.preference == 1)
						{
							cout << "Now display by title.\n";
							cout << sth.title;
						}
						else
						{
							cout << "Now display by bopname.\n";
							cout << sth.bopname;
						}
						//I love the part belows
						if (sth.preference >= 2)
							sth.preference = -1; //reset
						sth.preference++;	   
				break;
			default : cout << "\nThat's not a choice.\n";
		}
		cout << "\nNext choice: ";
		cin >> choice;
	}
	cout << "Bye!" << endl;
	return 0;
}

void showmenu()
{
	cout << "\nBenevolent Order of Programmers Report\n"
			"a. display by name		b. display by title\n"
			"c. display by bopname	d. display by preference\n"
			"q. quit\n";
}