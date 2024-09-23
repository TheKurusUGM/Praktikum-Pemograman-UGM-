#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    std::cout << "Enter coefficient a: ";
    std::cin >> a;
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    if (a == 0) {
        std::cout << "This is not a quadratic equation (a cannot be 0)." << std::endl;
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "The equation has two distinct real roots:\n";
        std::cout << "Root 1: " << root1 << "\n";
        std::cout << "Root 2: " << root2 << "\n";
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        std::cout << "The equation has one real root:\n";
        std::cout << "Root: " << root1 << "\n";
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "The equation has no real roots. The complex roots are:\n";
        std::cout << "Root 1: " << realPart << " + " << imaginaryPart << "i\n";
        std::cout << "Root 2: " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
