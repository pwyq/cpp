//Write a program that requests the user to enter three times for the 
//40-meters dash and then displays the times and the average.
//Use an array object to hold the data.(Use a build-in array if array is not available)

//4_10.cpp

#include <iostream>
#include <array>

int main()
{
	using namespace std;
	
	array<float, 3> length;
	
	cout << "Enter your 1st time = ";
	cin >> length[0];
	cout << "Enter your 2nd time = ";
	cin >> length[1];
	cout << "Enter your 3rd time = ";
	cin >> length[2];
	
	cout << "Your average time = "
		 << float(length[0]+length[1]+length[2])/3 << endl;
	
	return 0;
}

//g++ -std=gnu++14 choices.cpp -o choices.exe