
#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	
	clock_t start = clock();
	float duration;
	
	double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
	for (double x: prices)
		cout << x << endl;
	
	for (double &x: prices)
	{
		x = x * 0.80;		//20% off sale
							//The & symbol identifies x as a reference variable
		cout << x << endl;
	}

							
	for (int x : {3, 5, 2, 8, 6})
		cout << x << " ";
	cout << endl;
	
	duration = (clock() - start) / (double) CLOCKS_PER_SEC;
	cout << "duration: " << duration << endl;
	
	return 0;
}