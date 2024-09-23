#include <iostream>
#include <cmath> 

int main() {

    double a, b, c;

    std::cout << "Enter the coefficients a, b, and c for the quadratic equation ax^2 + bx + c = 0:\n";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    double D = b * b - 4 * a * c;

    if (D > 0) {
      
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "The equation has two real and distinct roots:\n";
        std::cout << "x1 = " << x1 << "\n";
        std::cout << "x2 = " << x2 << "\n";
    } else if (D == 0) {
    
        double x = -b / (2 * a);
        std::cout << "The equation has two real and equal roots:\n";
        std::cout << "x1 = x2 = " << x << "\n";
    } else {
        
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);
        std::cout << "The equation has two imaginary roots:\n";
        std::cout << "x1 = " << realPart << " + " << imaginaryPart << "i\n";
        std::cout << "x2 = " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
