//Write a program that asks the user to enter his or her first name and then
//last name, and that then constructs, stores and displays a third string, consisting
//of the user's last name followed by a comma, a space, and first name.
//Use char arrays and functions from the cstring header file.
//A smaple looks like this:
//Enter your first name: Flip
//Enter your last name: Fleming
//Here's the information in a single string: Fleming, Flip

//4_3.cpp

#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int arrSize = 20;
	char first_name[arrSize];
	char last_name[arrSize];
	
	cout << "Enter your first name: ";
	cin.getline(first_name, arrSize);
	first_name[19] = '\0';
	cout << "Enter your last name: ";
	cin.getline(last_name, arrSize);
	last_name[19] = '\0'; //optional?
	
	strcat(last_name, ", ");
	strcat(last_name, first_name);
	cout << "Here's the information in a single string: ";
	cout << last_name << endl;
	
	// Alternatively, 
	//char full_name[40];
	//strcpy(full_name, strcat(strcat(last_name, ", "), first_name);
	
	return 0;
}