#include <iostream>
using namespace std;

int main() {
    int n = 5;  
    int sum = 0;

    cout << "Testing with hardcoded value n = " << n << endl;

  
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

  
    cout << "The sum of all natural numbers up to " << n << " is: " << sum << endl;

    if (sum == 15) {  
        cout << "Test successful!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    return 0;
}
