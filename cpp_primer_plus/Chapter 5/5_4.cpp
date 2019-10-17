//Daphne invests $100 at 10% simple interest. That is, every year, the investment 
//ears 10% of the original investment, or $10 each and every year:
//interest = 0.10 x original balance
//At the same time, Cleo invests $100 at 5% compound interest. That is, interest is
//5% of the current balance, including previous additions of interest:
//interest = 0.05 x current balance 
//Cleo earns 5% of $100 the first year, giving her %105. The next year she earns 5% of 
//$105, or $5.25, and so on. 
//Write a program that finds how many years it takes for the value of Cleo's investment
// to exceed the value of Daphne's investment and then display the value of both 
//investment at that time.

#include <iostream>

int main()
{
	using namespace std;
	
	double Da_balance = 100;
	double Cl_balance = 100;
	
	double Da_interest = 0.10 * Da_balance;
	double Cl_interest;
	int year = 0;
	
	do
	{
		Da_balance += Da_interest;
		
		Cl_interest = 0.05 * Cl_balance;
		Cl_balance += Cl_interest;
		year++;
		//cout << "Daphne: " << Da_balance << endl;
		//cout << "Cleo: " << Cl_balance << endl;
	}
	while (Da_balance > Cl_balance);
		
	cout << "Now after " << year << " years, "
		 << "Daphne's balance is: " << Da_balance
		 << ", and Cleo's balance is: " << Cl_balance;
	cout << endl;
	
	return 0;
}