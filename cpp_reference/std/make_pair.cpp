// https://en.cppreference.com/w/cpp/utility/pair/make_pair
#include <iostream>
#include <utility>
#include <functional>
 
int main()
{
    int n = 1;
    int a[5] = {1, 2, 3, 4, 5};
 
    // build a pair from two ints
    auto p1 = std::make_pair(n, a[4]);
    std::cout << "The value of p1 is "
              << "(" << p1.first << ", " << p1.second << ")\n";
    std::cout << std::get<0>(p1) << ", " << std::get<1>(p1) << std::endl;
 
    // build a pair from a reference to int and an array (decayed to pointer)
    auto p2 = std::make_pair(std::ref(n), a);
    std::cout << std::get<0>(p2) << ", " << std::get<1>(p2) << std::endl;
    n = 7;
    std::cout << "The value of p2 is "
              << "(" << p2.first << ", " << *(p2.second + 2) << ")\n";
    std::cout << std::get<0>(p2) << ", " << std::get<1>(p2) << std::endl;
    std::cout << *(p2.second) << std::endl;
}

/* Output
The value of p1 is (1, 5)
1, 5
1, 0x7ffefc3674b0
The value of p2 is (7, 3)
7, 0x7ffefc3674b0
1
*/
