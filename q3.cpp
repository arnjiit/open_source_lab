#include <iostream>
#include <string>

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Reverse the string
    std::cout << "Reversed string: ";
    for (int i = str.length() - 1; i >= 0; --i) {
        std::cout << str[i];
    }
    std::cout << std::endl;

    return 0;
}
