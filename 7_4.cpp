//calculate the odds of winning

#include <iostream>

using namespace std;

double probability(unsigned numbers, unsigned picks)
{
	double result = 1.0;
	double n;
	unsigned p;
	
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}