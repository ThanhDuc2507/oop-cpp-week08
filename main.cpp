#include <iostream>
using namespace std;

void setFirstToZero(int arr[]) {
    arr[0] = 0;
}

void incrementAll(int (&arr)[4]) {
    for (int i = 0; i < 4; ++i) {
        arr[i] += 1;
    }
}

int main() {
    int nums[4] = {1, 2, 3, 4};
    setFirstToZero(nums);
    incrementAll(nums);
    
    cout << nums[0] << " " << nums[1] << " "
         << nums[2] << " " << nums[3] << endl;
         
    return 0;
}