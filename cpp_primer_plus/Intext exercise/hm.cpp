//hm.cpp
#include <iostream>

using namespace std;

int main()
{
    float pi = ((25 + 273.15) * 10) / 5.25;
	float pf = ((62 + 273.15) * 12.5) / 5.25;
	
	cout << pi << " " << pf << endl;
	
	float result = pf / pi;
	
	cout << result * 762 << endl;
	
	return 0;
}