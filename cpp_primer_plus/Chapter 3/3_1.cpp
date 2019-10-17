// Write a shor program that asks for your height in integer inches and then converts your 
// height to feet and inche. Have the program use the underscore character to indicate where to 
// type the response.
// Also use a const symbolic constant to represent the conversion factor.
// 3_1.cpp
// 1 feet = 12 inches

// add cm to inch function.
// 1cm to 0.393701 inch

#include <iostream> 
using namespace std;

float cmtoinch(float);

int main()
{
	int height_inch;
	string choice;
	float cm;
	
	const int In_per_ft = 12; // constant
	
	cout << "Convert your height from cm or in to feet." << endl; // introduction
	cout << "\nDo your prefer starting with unit cm or in?\n>> ";
	cin >> choice;
	
	if(choice == "cm")
	{
		cout << "Please enter your height in cm: ___\b\b\b";
		cin >> cm;
		
		height_inch = cmtoinch(cm);
		
		cout << cm << " cm is " << height_inch << " inches." << endl;
	}
	
	else if(choice == "in")
	{
	    cout << "Please enter your height in inches: __\b\b"; 
	    //use the underscore character to indicate where to type the response
	    cin >> height_inch;	
	}
	
	int feet = height_inch / In_per_ft; // whole feet 
	int inch = height_inch % In_per_ft; // remainder in inches 
	
	cout << height_inch << " inches are " << feet << " feet, ";
	cout << inch << " inches." << endl;
	
	return 0;
}

float cmtoinch(float sts)
{
	return sts * 0.393701;
}