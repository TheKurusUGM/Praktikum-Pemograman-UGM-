#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;  
    } else {
        return gcd(b, a % b);  
    }
}
int main() {
    int num1 = 48;  
    int num2 = 18;  
    int expected_result = 6;  

    cout << "Testing with hardcoded values: num1 = " << num1 << ", num2 = " << num2 << endl;

    
    int result = gcd(num1, num2);

    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    if (result == expected_result) {
        cout << "Test Successful!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }

    return 0;
}
