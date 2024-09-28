#include <iostream>
#include <vector>
#include <cassert> 

std::vector<int> ReverseArray(const std::vector<int>& input) {
    std::vector<int> reversed;

    for (int i = input.size() - 1; i >= 0; --i) {
        reversed.push_back(input[i]);
    }

    return reversed;
}


void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}


void testReverseArray() {
 
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {5, 4, 3, 2, 1};

  
    std::cout << "Input array: ";
    printVector(input);

    
    std::cout << "Expected reversed array: ";
    printVector(expected);

   
    std::vector<int> result = ReverseArray(input);
  
    std::cout << "Actual reversed array: ";
    printVector(result);

    
    assert(result == expected);

 
    std::cout << "Test passed: ReverseArray output is correct!" << std::endl;
}

int main() {
  
    testReverseArray();

    return 0;
}
