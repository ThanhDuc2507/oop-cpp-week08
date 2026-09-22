#include <iostream>
#include <vector>
using namespace std;

void insertSubarray(vector<int>& arr, const vector<int>& sub, int index) {
    arr.insert(arr.begin() + index, sub.begin(), sub.end());
}

int main() {
    vector<int> nums = {10, 20, 30};
    vector<int> sub = {7, 8, 9};
    int pos = 1;

    insertSubarray(nums, sub, pos);

    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}