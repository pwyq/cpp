#include <iostream>
#include <set>
#include <string>
#include <iterator>

// C++ STL (standard template library)
// vectors, lists, queues, stacks etc
int main() {
    std::set<std::string> names;

    names.insert("Peter");
    names.insert("tetset");

    // ** Different containter behaviourss
    // names[0] = "Peter";  // vector
    // names["Peter"] = 0;  // map

    std::cin.get();
    return 0;
}