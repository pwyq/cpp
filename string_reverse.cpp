#include <iostream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    for (int i = input.length() -1; i >= 0; --i) {
        std::cout << input[i];
    }
    std::cout << '\n';

    return 0;
}
