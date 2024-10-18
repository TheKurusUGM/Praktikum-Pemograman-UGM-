#include <iostream>

using namespace std;
struct Student {
  int nim;
  float uts;
  float uas;
  float average;
};

int main() {
  int N;

  cout << "Enter the number of students (max 50): ";
  cin >> N;

  if (N > 50) {
    cout << "The maximum number of students is 50. Please try again." << endl;
    return 1;
  }

  Student students[50];

  for (int i = 0; i < N; i++) {
    cout << "\nEnter data for student " << i + 1 << ":" << endl;

    cout << "Enter NIM: ";
    cin >> students[i].nim;

    cout << "Enter UTS score: ";
    cin >> students[i].uts;

    cout << "Enter UAS score: ";
    cin >> students[i].uas;

    students[i].average = (students[i].uts + students[i].uas) / 2;
  }

  cout << "\nStudent data and averages:" << endl;
  for (int i = 0; i < N; i++) {
    cout << "NIM: " << students[i].nim << endl;
    cout << "Average: " << students[i].average << endl;
  }

  return 0;
}
