#include <iostream>
#include <vector>
#include <algorithm>

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

void insertionSortByNISN(std::vector<Student>& students) {
    for (size_t i = 1; i < students.size(); i++) {
        Student key = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].NISN < key.NISN) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
}

void selectionSortByValue(std::vector<Student>& students) {
    for (size_t i = 0; i < students.size() - 1; i++) {
        size_t maxIdx = i;
        for (size_t j = i + 1; j < students.size(); j++) {
            if (students[j].Value > students[maxIdx].Value) {
                maxIdx = j;
            }
        }
        std::swap(students[i], students[maxIdx]);
    }
}

void bubbleSortByNISN(std::vector<Student>& students) {
    bool swapped;
    for (size_t i = 0; i < students.size() - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < students.size() - i - 1; j++) {
            if (students[j].NISN < students[j + 1].NISN) {
                std::swap(students[j], students[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void bubbleSortByValue(std::vector<Student>& students) {
    bool swapped;
    for (size_t i = 0; i < students.size() - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < students.size() - i - 1; j++) {
            if (students[j].Value < students[j + 1].Value) {
                std::swap(students[j], students[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

bool isSortedByNISN(const std::vector<Student>& students) {
    for (size_t i = 1; i < students.size(); i++) {
        if (students[i - 1].NISN < students[i].NISN) return false;
    }
    return true;
}

bool isSortedByValue(const std::vector<Student>& students) {
    for (size_t i = 1; i < students.size(); i++) {
        if (students[i - 1].Value < students[i].Value) return false;
    }
    return true;
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

   
    insertionSortByNISN(students);
    if (isSortedByNISN(students)) {
        std::cout << "Insertion Sort by NISN Test Passed!\n";
    } else {
        std::cout << "Insertion Sort by NISN Test Failed!\n";
        return 1;
    }

    
    students = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

  
    selectionSortByValue(students);
    if (isSortedByValue(students)) {
        std::cout << "Selection Sort by Value Test Passed!\n";
    } else {
        std::cout << "Selection Sort by Value Test Failed!\n";
        return 1;
    }

 
    students = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    
    bubbleSortByNISN(students);
    if (isSortedByNISN(students)) {
        std::cout << "Bubble Sort by NISN Test Passed!\n";
    } else {
        std::cout << "Bubble Sort by NISN Test Failed!\n";
        return 1;
    }

   
    students = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    
    bubbleSortByValue(students);
    if (isSortedByValue(students)) {
        std::cout << "Bubble Sort by Value Test Passed!\n";
    } else {
        std::cout << "Bubble Sort by Value Test Failed!\n";
        return 1;
    }

    std::cout << "All Tests Passed Successfully!\n";
    return 0;
}
