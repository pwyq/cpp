//write a function that passes a box structure by value and that displays the 
//value of each member.
//write a function that passes the addres of a box structure and that sets the 
//volume member to the product of the other three dimensions
//Write a simple program that uses these two functions.

#include <iostream>
using namespace std;


struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void display(box x)
{
	cout << "Maker: " << x.maker << endl;
	cout << "Height: " << x.height << endl;
	cout << "Width: " << x.width << endl;
	cout << "Length: " << x.length << endl;
	cout << "Volume: " << x.volume << endl;
}

void setVolume(box * x)
{
	x -> volume = x -> height * x -> width * x -> length;
}

int main()
{
	cout << "Enter the maker: ";
	box box1;
	// cin.get(box1.maker, 40);
	// while(cin.get() != '\n')
		// continue;
	cin.getline(box1.maker, 40);
	
	cout << "Enter the height: ";
	cin >> box1.height;
	cout << "Enter the width: ";
	cin >> box1.width;
	cout << "Enter the length: ";
	cin >> box1.length;
	cout << "Enter the volume: ";
	cin >> box1.volume;
	
	cout << "\nThis is your box: " << endl;
	display(box1);
	if (box1.volume != box1.height * box1.width * box1.length)
	{
		cout << "\nNot corresponding dimensions." << endl;
		setVolume(&box1);
		cout << "Here are the new corrected dimensions: " << endl;
		display(box1);
	}
	
	return 0;
}
