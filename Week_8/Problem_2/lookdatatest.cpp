#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

struct Student {
    long long NISN;
    std::string Nama;
    int Value;
};

int binarySearch(const std::vector<Student>& students, long long targetNISN) {
    int left = 0;
    int right = students.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (students[mid].NISN == targetNISN) {
            return students[mid].Value;
        } else if (students[mid].NISN < targetNISN) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
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

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.NISN < b.NISN;
    });

    long long targetNISN = 9950310962;
    int expectedValue = 80;
    int value = binarySearch(students, targetNISN);

    assert(value == expectedValue);
    std::cout << "Test Success" << std::endl;

    return 0;
}
