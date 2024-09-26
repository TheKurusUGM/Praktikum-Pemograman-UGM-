#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> FizzBuzzResults;

    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            FizzBuzzResults.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            FizzBuzzResults.push_back("Fizz");
        } else if (i % 5 == 0) {
            FizzBuzzResults.push_back("Buzz");
        } else {
            FizzBuzzResults.push_back(std::to_string(i));
        }
    }

    for (const std::string& result : FizzBuzzResults) {
        std::cout << result << std::endl;
    }

    return 0;
}
