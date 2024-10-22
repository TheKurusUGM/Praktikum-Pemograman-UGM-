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
    int num = 5;  
    int expected_result = 120;  

    cout << "Testing with hardcoded value: num = " << num << endl;

    int result = factorial(num);

    cout << "Factorial of " << num << " is: " << result << endl;

    if (result == expected_result) {
        cout << "Test Success!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }

    return 0;
}
