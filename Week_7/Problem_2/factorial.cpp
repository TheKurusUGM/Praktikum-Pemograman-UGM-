#include <iostream>
using namespace std;

int factorial(int x) {
    if (x == 0 || x == 1) {
        return 1;  
    } else {
        return x * factorial(x - 1);  
    }
}

int main() {
    int num;

    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
