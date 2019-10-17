//Design a structure called car that holds the following information about an 
//automobile: its make, as a string in a character array or in a string object, and
//the year it was built, as an integer.
//Write a program that asks the user how many cars to catalog. The program should
//then use new to create a dynamic array of that many car structures.
//Next, it should prompt the user to input the make (which might consist of more than one
//word) and yar information for each structure. Note that this requires some care because 
//it alternates reading strings with numeric data see Chapter 4).
//Finally, it should display the contents of each structure. A sample run should look 
//something like the following:
//How many cars do you wish to catalog? 2
//Car #1:
//Please enter the make: Hudson Hornet
//Please enter the year made: 1952
//Car #2:
//Please enter the make: Kasier
//Please enter the year made: 1951
//Here is your collection
//1952 Hudson Hornet 
//1951 Kaiser

#include <iostream>
#include <string> //declaring type string
struct Car
{
	std::string make;
	int year;
};

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::getline;
	
	cout << "How many cars do you wish to catalog? ";
	int num;
	cin >> num;
	
	Car * catalog = new Car[num];
	
	for (int i = 0; i < num; ++i)
	{
		cin.get(); // this line is crucial for read the newline of the last input;
				   // It gets rid of the newline character of the num variable.
		cout << "Car#" << i+1 << endl;
		cout << "Please enter the make: ";
		getline(cin, (catalog+i)->make);//catalog[i].make also works
		//cin.get(); <- If you include this, you have to push another enter 
		cout << "Please enter the year made: ";
		cin >> (catalog+i)->year;
		//cin.get();
	}
	
	cout << "\nHere is your collection." << endl;
	for (int i = 0; i < num; ++i)
	{
		cout << catalog[i].year << " "
			 << catalog[i].make << endl;
	}
	
	delete [] catalog;
	
	return 0;
}

//	getline(cin, str2); -> for string object
//	cin.getline(first_name, arrSize); -> for a string in a character array