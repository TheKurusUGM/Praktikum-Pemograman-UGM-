#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2, choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose the operation:\n1. Addition\n2. Subtraction\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Result: " << add(num1, num2) << endl;
    } else if (choice == 2) {
        cout << "Result: " << subtract(num1, num2) << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
