//recur.cpp -- using recursion
#include <iostream>
void countdown(int n);

int main()
{
	countdown(4);
	return 0;
}

void countdown(int n)
{
	using namespace std;
	cout << "Counting down..." << n << " (n at " << &n << ")" << endl;
	if (n > 0)
		countdown(n-1);	//function call itself
	//When the if statement becomes false, the current
	//call then proceeds to statement2.
	cout << n << ": Kaboom!" << "   	 (n at " << &n << ")" << endl;
	cout << "--------" << endl;
}