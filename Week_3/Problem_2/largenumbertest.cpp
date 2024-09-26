#include <iostream>
using namespace std;

int main() {

    // Hardcoded test values
    int num1 = 15;   // Test value for number 1
    int num2 = 7;    // Test value for number 2
    int num3 = 22;   // Test value for number 3

    cout << "Testing with the following hardcoded values:\n";
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "Number 3: " << num3 << endl;

    int largest = num1; 
    if (num2 > largest) {
        largest = num2;  
    }

    if (num3 > largest) {
        largest = num3;  
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
