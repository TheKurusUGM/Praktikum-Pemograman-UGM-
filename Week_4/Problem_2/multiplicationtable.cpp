#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Multiplication table for " << n << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
