//arfupt.cpp -- an array of function pointers
#include <iostream>
//various notations, same signatures
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);
//declare pointers that can point to one of these functions

int main()
{
	using namespace std;
	double av[3] = {1112.3, 1542.6, 2227.9};
	
	//pointer to a function
	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2;
	
	cout << "Using pointers to functions:\n";
	cout << " Address Value\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	//1. p1 points to a function that takes in an array and an int argument 
	//Or: calling the pointed-to function with av and 3 as arguments
	//2. dereference operator extract the value at the address 
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
	//1. p2 is a function that takes in an array and an int argument
	//   p2 points to the f2 function; calling the pointed-to function
	//2. same as the second point above
	
//The name of a C++ function acts as the address of the function.	
	
	//pa an array of pointers 
	//auto doesn't work with list initialization
	const double *(*pa[3])(const double *, int) = {f1, f2, f3};
	//but it does work for initializing to a single value 
	//pb a pointer to first element of pa 
	auto pb = pa;
	//*pa is the function, pa is the address of the first element,
	//pb pointer to first elements
	
	//pre-C++11 can use the following code instead
	//const double *(**pb)(const double *, int) = pa;
	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	cout << "\nUsing a pointer to a pointer to a function:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	
	//what about a pointer to an array of function pointers
	cout << "\nUsing a pointers to an array of pointers:\n";
	cout << " Address Value\n";
	//easy way to declare pc 
	auto pc = &pa;
	cout << "&pa: " << &pa << endl;
	cout << "*(&pa): " << *(&pa) << endl;
	cout << "pa: " << pa << endl;
	// pre-C++11 can use the following code instead
    // const double *(*(*pc)[3])(const double *, int) = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	//hard way to declare pd 
	const double *(*(*pd)[3])(const double *, int) = &pa;
	//store return value in pdb 
	const double * pdb = (*pd)[1](av,3);
	cout << pdb << ": " << *pdb << endl;
	//alternative notation 
	cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2])(av,3) << endl;
	//cin.get()
	return 0;
}

// some rather dull functions 

const double * f1(const double *ar, int n)
{
	return ar;
}

const double * f2(const double ar[], int n)
{
	return ar+1;
}
const double * f3(const double ar[], int n)
{
	return ar+2;
}