#include <iostream>
#include <vector>
#include <fstream>  

struct Student {
    long long NISN;
    std::string Nama;
    int Value;
};

void displayData(const std::vector<Student>& students) {
    for (const auto& student : students) {
        std::cout << student.NISN << " " << student.Nama << " " << student.Value << std::endl;
    }
}

void updateNameByValue(std::vector<Student>& students, int targetValue, const std::string& newName) {
    for (auto& student : students) {
        if (student.Value == targetValue) {
            student.Nama = newName; 
        }
    }
}

int main() {
    std::vector<Student> students = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    std::cout << "Original Data:\n";
    displayData(students);

    updateNameByValue(students, 60, "Joko");

    std::cout << "\nData after updating names with Value 60 to 'Joko':\n";
    displayData(students);

  
    std::ofstream testFile("test_output.txt");
    if (testFile.is_open()) {
        for (const auto& student : students) {
            testFile << student.NISN << " " << student.Nama << " " << student.Value << std::endl;
        }
        testFile.close();
        std::cout << "\n Test successful!" << std::endl;
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }

    return 0;
}
