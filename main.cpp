#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int& r = a;
    r = 10;
    cout << a << endl;
    cout << r << endl;
    return 0;
}