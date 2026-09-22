#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "I like Java";

    s.replace(7, 4, "C++");

    cout << s << endl;

    return 0;
}