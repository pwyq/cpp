//7_6.cpp

//The program should use these functions to fill an array, show the array,
//reverse the array, show the array, reverall but the first and last elements 
//of that array, and then show the array.

#include <iostream>

int Fill_array(double value[], int size);
void Show_array(const double value[], int size);
void Reverse_array(double value[], int size);
using namespace std;

int main()
{	
	cout << "Enter the amount of numerical value you want to store: ";
	int arrSize;
	cin >> arrSize;
	double value[arrSize];
	
	int entries = Fill_array(value, arrSize);
	cout << "Your array is: \n";
	Show_array(value, entries);
	cout << "\nNow reversing the array.";
	Reverse_array(value, entries);
	cout << "\nYour array after reversing is: ";
	Show_array(value, entries);
	cout << "\nNow reversing all except the first and last elements." << endl;
	Reverse_array(value + 1, entries - 2);		//value + 1 means start from the second element of the array.
	cout << "\nYour array after revering is: ";
	Show_array(value, entries);
	
	return 0;
}

int Fill_array(double value[], int size)
{
	int count = 0;
	// for (int i = 0; i < size; i++)
	// {
		// cin >> value[i];
		// if (cin.fail())
		// {
			// cout << "test" << endl;
			// return;
		// }
	// }
	while (count < size && cin >> value[count])
	{
		if (++count < size)
			cout << "Enter value number " << count+1 << " (or type\"q\" when finishes): ";
	}
	return count;
}

void Show_array(const double value[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << value[i] << " ";
	}
	return;
}

void Reverse_array(double value[], int size)
{
	int temp;
	for (int i = 0; i < size/2; i++)
	{
		temp = value[i];
		value[i] = value[size-1-i];
		value[size-1-i] = temp;
	}
	return;
}