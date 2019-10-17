//twotemps.cpp -- using overload template functions
#include <iostream>
template <typename T>	//original template
void Swap(T &a, T &b);

template <typename T>	//new template 
void Swap(T *a, T *b, int n);
void Show(int a[]);

const int Lim = 8;
int main()
{
	using namespace std;
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);	//match original template 
	cout << "Now i, j = " << i << ", " << j << ".\n";
	
	int d1[Lim] = {0, 7, 0, 3, 1, 7, 7, 6};
	int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
	cout << "Oringinal arrays:\n";
	Show(d1);
	Show(d2);
	Swap(d1,d2,Lim);	//match new template 
	cout << "Swapped arrays:\n";
	Show(d1);
	Show(d2);
	//cin.get();
	return 0;
}

template <typename T>	//what if I comment this?
//It will output an error that T is not declared, a thus isn't declared as well.
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>	//Same thing would happen if you comment this out as above.
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	using namespace std;
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < Lim; i++)
		cout << a[i];
	cout << endl;
}