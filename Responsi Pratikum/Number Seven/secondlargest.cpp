#include <iostream>
#include <vector>

using namespace std;

int findSecondLargest(const vector<int>& nums) {
    int largest = nums[0], secondLargest = -1;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        } else if (nums[i] > secondLargest && nums[i] != largest) {
            secondLargest = nums[i];
        }
    }

    return secondLargest;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    int secondLargest = findSecondLargest(nums);

    if (secondLargest == -1) {
        cout << "There is no second largest number in the list." << endl;
    } else {
        cout << "The second largest number is: " << secondLargest << endl;
    }

    return 0;
}

