#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";

    s.erase(5, 6);

    cout << s << endl;

    return 0;
}