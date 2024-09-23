#include <iostream>
using namespace std;

int main() {
    int n = 5;  

    cout << "Testing with hardcoded value n = " << n << endl;

    cout << "Multiplication table for " << n << ":\n";
    bool test_successful = true; 

    int expected_results[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    for (int i = 1; i <= 10; ++i) {
        int result = n * i;
        cout << n << " x " << i << " = " << result << endl;

        if (result != expected_results[i-1]) {
            test_successful = false;  
        }
    }
    if (test_successful) {
        cout << "Test successful!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    return 0;
}
