https://en.cppreference.com/w/cpp/utility/functional/ref
#include <functional>
#include <iostream>
 
void f(int& n1, int& n2, const int& n3)
{
    std::cout << "In function: " << n1 << ' ' << n2 << ' ' << n3 << '\n';
    ++n1; // increments the copy of n1 stored in the function object
    ++n2; // increments the main()'s n2
    // ++n3; // compile error
}
 
int main()
{
    int n1 = 1, n2 = 2, n3 = 3;
    std::function<void()> bound_f = std::bind(f, n1, std::ref(n2), std::cref(n3));
    n1 = 10;
    n2 = 11;
    n3 = 12;
    std::cout << "Before function: " << n1 << ' ' << n2 << ' ' << n3 << '\n';
    bound_f();
    std::cout << "After function: " << n1 << ' ' << n2 << ' ' << n3 << '\n';
    
    int x = 3;
    std::cout << "before, x=" << x << std::endl;
    std::ref(x);
    x = 6;
    std::cout << "now, x=" << x << std::endl;
    x=-1;
    std::cout << "changed again, x=" << x << std::endl;
}

/* Output
Before function: 10 11 12
In function: 1 11 12
After function: 10 12 12
before, x=3
now, x=6
changed again, x=-1
*/
