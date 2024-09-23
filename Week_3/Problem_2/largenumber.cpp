int main() {
    
    double num1, num2, num3;

 
    std::cout << "Enter three numbers:\n";
    std::cout << "First number: ";
    std::cin >> num1;
    std::cout << "Second number: ";
    std::cin >> num2;
    std::cout << "Third number: ";
    std::cin >> num3;

    
    double largest = num1;

    if (num2 > largest) {
        largest = num2; 
    }

    if (num3 > largest) {
        largest = num3; 
    }

   
    std::cout << "The largest number is: " << largest << "\n";

    return 0;
}
