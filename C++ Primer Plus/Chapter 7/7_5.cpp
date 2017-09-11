//7_5.cpp
//Define a recursive function that takes an integer argument and returns the 
//factorial of that argument. In general, if n is greater than 0, n! = n * (n-1)!
//Test your function in a program that uses a loop to allow the user to enter various
//values for which the program reports the factorial

#include <iostream>

int factorial(int n)
{
	//std::cout << "factorial function being called." << std::endl;
	// int result = 1;	
	// if (n == 0)
	// {
		// std::cout << "Factorial of 0 is: ";
		// return result;
	// }
	int result = 1;
	if (n > 0)
	{
		//non-recursive
		// for (int i = n; i > 0; i--)
		// {
			// result *= i;
		// }
		// std::cout << "Factorial of " << n  << " is: ";
		// return result;
		
		//recursive
		result = n * factorial(n-1);
		n--;
		return result;
	}
	else if (n == 0)
	{
		return result;
	}
	else
	{
		std::cerr << "Error: factorial only for non-negative integer!." << std::endl;
		return -1;
	}
}

int main()
{
	using std::cin;
	using std::endl;
	using std::cout;
	
	cout << "Enter your values: " << endl;
	
	int temp;
	
	while (cin >> temp)
	{
		if (temp == 0)
			cout << "Factorial of 0 is 1" << endl;
		else
			cout << "Factorial of " << temp << " is: " << factorial(temp) << endl;
		cout << "Enter your values: " << endl;
	}

	return 0;
}