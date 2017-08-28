//Paint a pic
//Enter number of rows: 5
//....*
//...**
//..***
//.****
//*****

#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	cout << "Enter number of rows: ";
	int rows;
	cin >> rows;
	int sub = rows;
	
	for (int i = 0; i < sub; i++)
	{
		for (int j = 0; j < rows - 1; j++)
			cout << ".";
		for (int k = sub; k > rows - 1; k--)
			cout << "*";
		cout << endl;
		
		rows--;
	}
	
	return 0;
}