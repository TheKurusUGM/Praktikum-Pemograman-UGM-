#include <iostream>
#include <cmath> 

int main() {

    // Hardcoded coefficients for testing
    double a = 1; // Coefficient of x^2
    double b = -3; // Coefficient of x
    double c = 2;  // Constant term

    std::cout << "Testing the quadratic equation with coefficients:\n";
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
    std::cout << "Equation: " << a << "x^2 + " << b << "x + " << c << " = 0\n";

    // Calculate the discriminant
    double D = b * b - 4 * a * c;

    if (D > 0) {
        // Two real and distinct roots
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "The equation has two real and distinct roots:\n";
        std::cout << "x1 = " << x1 << "\n";
        std::cout << "x2 = " << x2 << "\n";
    } else if (D == 0) {
        // Two real and equal roots
        double x = -b / (2 * a);
        std::cout << "The equation has two real and equal roots:\n";
        std::cout << "x1 = x2 = " << x << "\n";
    } else {
        // Two imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);
        std::cout << "The equation has two imaginary roots:\n";
        std::cout << "x1 = " << realPart << " + " << imaginaryPart << "i\n";
        std::cout << "x2 = " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
