#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";

    s.insert(5, ", C++");

    cout << s << endl;

    return 0;
}