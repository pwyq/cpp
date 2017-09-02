// Write a program that opens a text file, reads it character-by-character
// to the end of the file, and reports the number of characters in the file.

//6_8.cpp

#include <iostream>
#include <fstream>		// file I/O support
#include <cstdlib>		// support for exit()
const int arrSize = 60;
int main()
{
	using namespace std;
	char filename[arrSize];
	ifstream inFile;		//object for handling file input
	cout << "Enter name of data file: ";
	cin.getline(filename, arrSize);
	inFile.open(filename);
	if (!inFile.is_open())		//failed to open file 
	{
		cerr << "Error: Could not open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}
	
	char ch;
	int count = 0;		//number of item read 
	
	inFile.get(ch);
	while (inFile.good())
	{
		++count;
		inFile.get(ch);
	}
	
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input termintaed by data mismatch.\n";
	else
		cout << "Input termintaed for unkonwn reason.\n";
	if (count == 0)
		cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
	}
	
	inFile.close();
	return 0;
}
 