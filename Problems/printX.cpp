#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    int len;
    cin >> len;
    
    cout << "Input\n" << len << endl;
    cout << "Output\n";
    
    if ((len%2) != 1)
    {
        cout << "Error: Input must be an odd integer.";
    }
    else
    {
        for (int i = 0, j = len-1; i <= len,j >= 0; i++,j--)
        {
            // Upper part
            if (i < j)
            {
                // Print i spaces
                for (int x=0; x<i; x++)
                    cout << "1";
     
                // Print i'th X
                cout << "X";
     
                // Print j-i-1 spaces
                for (int x=0; x<j-i-1; x++)
                    cout << "2";
     
                // Print j'th X
                cout << "X" << endl;
            }
     
            // To print center point
            if (i==j)
            {
                // Print i spaces
                for (int x=0; x<i; x++)
                    cout << "3";
     
                // Print middle X
                cout << "X" << endl;
            }
     
            // To print lower part
            else if (i > j)
            {
                // Print j spaces
                for (int x = j-1; x>=0; x--)
                    cout << "4";
     
                // Print j'th X
                cout << "X";
     
                // Print i-j-1 spaces
                for (int x=0; x<i-j-1; x++)
                    cout << "5";
     
                // Print i'h X
                cout << "X" << endl;
            }
        }
    }
        
    return 0;
}