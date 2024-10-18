#include <iostream>

using namespace std;

struct Student {
  int nim;
  float uts;
  float uas;
  float average;
};

int main() {
  int N = 3; 

  
  Student students[50] = {
      {101, 80.5, 90.0}, 
      {102, 70.0, 85.0}, 
      {103, 60.0, 75.0}  
  };

 
  float expectedAverages[3] = {85.25, 77.5, 67.5};


  for (int i = 0; i < N; i++) {
    students[i].average = (students[i].uts + students[i].uas) / 2;
  }

  cout << "\nStudent data and averages:" << endl;
  for (int i = 0; i < N; i++) {
    cout << "NIM: " << students[i].nim << endl;
    cout << "Average: " << students[i].average << endl;
  }

  bool testSuccess = true;
  for (int i = 0; i < N; i++) {
    if (students[i].average != expectedAverages[i]) {
      testSuccess = false;
      cout << "Test failed for student with NIM: " << students[i].nim << endl;
    }
  }

  if (testSuccess) {
    cout << "\nTest successful: All averages are correct!" << endl;
  } else {
    cout << "\nTest failed: Some averages are incorrect." << endl;
  }

  return 0;
}
