#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;

   
    cout << "Input number 1: ";
    cin >> num1;
    cout << "Input number 2: ";
    cin >> num2;
    cout << "Input number 3: ";
    cin >> num3;

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

