#include <iostream>
#include <string>

// Output the process of finding gcd by using Euclidean algorithm
// Doesn't take care of negative input yet

int gcdMultiplier(int a, int b);
int gcdRemainder(int a, int b);
int gcdNewA(int a, int b);

int main(int argc, char* argv[])
{
	std::string::size_type sz;
	int a = std::stoi(argv[1], &sz);	// C++11 feature, convert string to int
	int b = std::stoi(argv[2], &sz);

	while(b != 0)
	{
		std::cout << a << " = " << gcdMultiplier(a, b) << " * " << b << " + " << gcdRemainder(a, b) << std::endl;

		int tempA = gcdNewA(a, b);	// don't update "a" here; otherwise it will screw the new "b"
		b = gcdRemainder(a, b);
		a = tempA;
	}
	std::cout << "\ngcd(" << argv[1] << ", " << argv[2] << ") = " << a << std::endl;
	return 0;
}

int gcdMultiplier(int a, int b)
{
	return (a / b);
}

int gcdRemainder(int a, int b)
{
	return (a % b);
}

int gcdNewA(int a, int b)
{
	return ((a - (a%b))/(a/b));
}