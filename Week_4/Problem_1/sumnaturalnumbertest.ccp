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

    return 0;
}
