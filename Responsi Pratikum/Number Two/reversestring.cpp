#include <iostream>
#include <string>

int main() {
    std::string input = "1,2,3,4,5"; 
    std::cout << "Original string: " << input << std::endl;
    std::cout << "Reversed string: ";

    for (std::size_t i = input.length(); i > 0; --i) {
        std::cout << input[i - 1];
    }
    std::cout << std::endl;
    return 0;
}
