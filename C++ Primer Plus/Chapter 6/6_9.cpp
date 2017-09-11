//Do Programming Exercise 6 but modify it to get info from a file.
//The first item in the file should be the number of contributors, and the 
//rest of file should consist of pairs of lines, with the first line 
//of each pair being a contributor's name and the second line being a 
//contribution.

#include <iostream>
#include <fstream>		// file I/O support
#include <cstdlib>		// support for exit()

const int arrSize = 20;
struct donor		// structure definition
{
	char name[arrSize];
	double donation;
};

int main()
{
	using namespace std;
	char filename[arrSize];
	ifstream inFile;		//object for handling file input
	
	//cout << "Enter name of data file: ";
	//cin.getline(filename, arrSize);
	inFile.open("test.txt"); // or use inFile.open(filename);
	if (!inFile.is_open())		//failed to open file 
	{
		cerr << "Error: Could not open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}
	
	int size;
	inFile >> size;
	
	if (inFile.peek() != ' ' && inFile.peek() != '\n')
	{
		cerr << "Error: Invalid input of the file." << endl;
		return -1;
	}
	else if (inFile.good() && size < 0)
	{
		cerr << "Error: Enter a positive number." << endl;
		return -1;
	}
	
	donor * donate_list = new donor[size];
	
	for (int i = 0; i < size; i++)
	{
		inFile.get();
		inFile.getline((donate_list+i)->name, arrSize);
		do
		{
			if (inFile.fail())
			{
				inFile.clear();
				inFile.ignore(100, '\n');
			}
			inFile >> (donate_list+i)->donation;
		}
		while (inFile.fail() || ((donate_list+i)->donation < 0));	//semicolon after do while loop!!!
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
	inFile.close();
	return 0;
}