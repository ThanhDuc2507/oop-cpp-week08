#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int& rx = x; // Tham chiếu rx trỏ đến x
    rx = 20;     // Thay đổi giá trị qua tham chiếu

    cout << "x = " << x << endl;   // Kết quả: 20
    cout << "rx = " << rx << endl; // Kết quả: 20

    return 0;
}