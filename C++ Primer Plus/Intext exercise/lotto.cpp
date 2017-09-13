// lotto.cpp -- probability of winning
#include <iostream>
double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices;
	cout << "Enter the total number of choices on the game card and\n"
			"the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices);	//compute the odds
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

double probability(unsigned numbers, unsigned picks)
{
	double result = 1.0;
	double n;
	unsigned p;
	
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}

//should have used long double, but my pc only allows double.