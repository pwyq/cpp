// ptrstr.cpp -- using pointers to strings
#include <iostream> 
#include <cstring> 		//declare strlen(), strcpy()
int main()
{
	using namespace std;
	char animal[20] = "bear";  //animal holds bear 
	const char *bird = "wren"; // bird holds address of string; 
							   // initialize a pointer-to-char to a string 
	char * ps; // uninitialized 
	
	cout << animal << " and " //display the char array 
	     << bird << "\n"; // display "wren" 
	cout << "*bird: " << *bird << endl;           //display w
	cout << "&bird: " << &bird << endl;			  //display the address of bird 
	bird = bird + 1;
	cout << "now bird is: " << bird << endl;	  //display ren 
	cout << "now *bird is: " << *bird << endl;	  //display r 
	cout << "now &bird is: " << &bird << endl;	  //display the address of bird, same as above 
	cout << "bird[0] is: " << bird[0] << endl;	  //display r
	cout << "bird[1] is: " << bird[1] << endl;	  //display e
	cout << "animal[0] is: " << animal[0] << endl;
	cout << "animal[1] is: " << animal[1] << endl;
	cout << "animal[19] is: " << animal[19] << endl;
	cout << "&animal[0] is: " << &animal[0] << endl;
	cout << "&animal[1] is: " << &animal[1] << endl;
	cout << "&bird[0] is: " << &bird[0] << endl;
	cout << "&bird[1] is: " << &bird[1] << endl;
	bird = bird - 1;
	cout << "&bird[0] is: " << &bird[0] << endl;
	cout << "&animal is: " << &animal << endl;

	cout << endl;
	
	//cout << ps << "\n"; // may display garbage, may cause a crash 
	
	cout << "Enter a kind of animal: ";
	cin >> animal; 	// ok if input < 20 chars 
	//cin >> ps; Too horrible a blunder to try; ps doesn't point to allocated space 
	
	ps = animal; //set ps to point to string, it doesn't copy the string; it copies the address.
	cout << ps << "!\n"; // ok, same as using animal 
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	
	ps = new char [strlen(animal) + 1]; // get new storage 
	strcpy(ps, animal); 	// copy string to new storage 
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete [] ps;
	return 0;
}