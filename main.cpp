#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World!";
    string insertText = "C++ ";

    s.insert(6, insertText);

    cout << s << endl;

    return 0;
}