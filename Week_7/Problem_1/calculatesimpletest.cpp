#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    
    int num1 = 10;   
    int num2 = 5;    
    int choice = 1;  

    int expected_result = 15;

    cout << "Testing with hardcoded values:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << ", operation = Addition\n";

    int result;
    if (choice == 1) {
        result = add(num1, num2);
        cout << "Result: " << result << endl;
    } else if (choice == 2) {
        result = subtract(num1, num2);
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid choice" << endl;
        return 0;
    }

    if (result == expected_result) {
        cout << "Test Success!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }

    return 0;
}
