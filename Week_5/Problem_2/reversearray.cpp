#include <iostream>
#include <vector>


std::vector<int> ReverseArray(const std::vector<int>& input) {
    std::vector<int> reversed;


    for (int i = input.size() - 1; i >= 0; --i) {
        reversed.push_back(input[i]);
    }

    return reversed;
}

int main() {
    std::vector<int> input;
    int n, element;


    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> element;
        input.push_back(element);
    }

    std::vector<int> reversed = ReverseArray(input);

    std::cout << "Reversed array: ";
    for (int num : reversed) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}    
