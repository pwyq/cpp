#include <iostream>
using namespace std;
int main()
{
	char s[100] = "A very long string about a very special ring...";
	char f[] = "ring";
	int i = 0;
	while (s[i] != 0)
	{
		int j = 0;
		int m = 1;
		while ((f[j] != 0) && (m == 1))
		{
			if (s[i+j] != f[j])
			{
				m = 0;
			}
			cout << "now j is: " << j << endl;
			j++;
		}
		if (m == 1)
			cout << i << " ";
		cout << "now i is: " << i << endl;
		++i;
		cout << "========" << endl;
	}
	return 0;
}
//what is the output of the program (5 point).