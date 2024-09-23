#include <iostream>
#include <iomanip>
#include <locale>  

int main() {
  
    std::string name;
    double grossSalary, netSalary;
    double tax, installment, insurance;


    const double TAX_RATE = 0.20; 


    std::cout << "Enter employee name: ";
    std::getline(std::cin, name);

    std::cout << "Enter gross salary : ";
    std::cin >> grossSalary;

    std::cout << "Enter installment amount : ";
    std::cin >> installment;

    std::cout << "Enter insurance amount : ";
    std::cin >> insurance;

 
    tax = grossSalary * TAX_RATE;
    netSalary = grossSalary - tax - installment - insurance;

  
    std::cout.imbue(std::locale("en_US.UTF-8")); 
    std::cout << std::fixed << std::setprecision(0); 
    
    std::cout << "\n--- Employee Payslip ---\n";
    std::cout << "Name:          " << name << '\n';
    std::cout << "Gross Salary:  Rp" << grossSalary << '\n';
    std::cout << "Tax (20%):     Rp" << tax << '\n';
    std::cout << "Installment:   Rp" << installment << '\n';
    std::cout << "Insurance:     Rp" << insurance << '\n';
    std::cout << "Net Salary:    Rp" << netSalary << '\n';
    std::cout << "------------------------\n";

    return 0;
}
