//dynamically allocated array of structure
//6_6.cpp

#include <iostream>

const int arrSize = 20;
struct donor		// structure definition
{
	char name[arrSize];
	double donation;
};

int main()
{
	using std::cout; using std::cin;
	using std::endl; using std::cerr;
	
	int size;
	cout << "How many donors do you want to input? > ";
	cin >> size;
	
	if (cin.peek() != ' ' && cin.peek() != '\n')
	{
		cerr << "Error: Invalid Input." << endl;
		return -1;
	}
	else if (cin.good() && size < 0)
	{
		cerr << "Error: Enter a positive number." << endl;
		return -1;
	}
	
	donor * donate_list = new donor[size];
	
	for (int i = 0; i < size; i++)
	{
		cout << "For the #" << i+1 << " donor" << endl;
		cout << "Enter the donor's name: ";
		cin.get();
		cin.getline((donate_list+i)->name, arrSize);
		do
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(100, '\n');
			}
			cout << "Please enter the amount of donation: ";
			cin >> (donate_list+i)->donation;
		}
		while (cin.fail() || ((donate_list+i)->donation < 0));	//semicolon after do while loop!!!
		cout << "\n--------" << endl;
	}
	
	cout << "This is the list of Grand Patrons donors." << endl;
	cout << "Donor(s) who contribute over $10,000: " << endl;
	for (int i = 0; i < size; i++)
	{
		if (donate_list[i].donation >= 10000.0)
			cout << donate_list[i].name << endl;				
	}
	
	cout << "Many thanks to remaining donors: " << endl;
	for (int i = 0; i < size; i++)
	{
		if (donate_list[i].donation < 10000)
			cout << donate_list[i].name << endl;
	}

	delete [] donate_list;
	return 0;
}