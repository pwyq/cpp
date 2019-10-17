//Write a c++ program that requests and displays information as shown in the following
//example of output:
//What is your first name? Betty Sue
//What is your last name? Yewe
//What letter grade do you deserve? B
//What is your age? 19
//output Name: Yewe, Betty Sue
//Grade: C
//Age: 19
//Note that the program should be able to accept first names that comprise more than one 
//word. Also note that the program adjusts the grade downward - i.e., up to one letter.
//Assume that the user requests an A, B, or a C so that you don't have to worry about the 
//gap bewteen a D and an F.

//4_1.cpp

//Review: The cin use whitespace-spaces, tabs and newlines - to delineate a string.
//which means cin reads just one one word when it gets input for a character array.
//After it reads this word, cin automatically adds the terminating null character
//when it places the string into the array. 

#include <iostream>

int main()
{
	using namespace std;
	const int arrSize = 20;
	char first_name[arrSize] = {};
	char last_name[arrSize] = {};
	char grade;
	int age;
	
	cout << "What is your first name? ";
	// or cin.getline(first_name, arrSize); // read through newline 
	cin.get(first_name, arrSize).get();
	cout << "What is your last name? ";
	cin >> last_name;
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age;
	
	return 0;
}