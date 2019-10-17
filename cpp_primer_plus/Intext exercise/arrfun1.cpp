// arrfun1.cpp -- functions with an array argument
#include <iostream>
const int arrSize = 8;
int sum_arr(int arr[], int n);		//prototype
int main()
{
	using namespace std;
	int cookies[arrSize] = {1, 2, 4, 8, 16, 32, 64, 128};
	//some systems require preceding int with static to enable array initialization
	
	int sum = sum_arr(cookies, arrSize);
	cout << "Total cooies eaten: " << sum << "\n";
	return 0;
}

//return the sum of an integer array
int sum_arr(int arr[], int n)
{
	int total = 0;
	
	for (int i = 0; i < n; i++)
		total += arr[i];
	return total;
}