#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "I love C++";
    size_t pos = text.find("C++");

    if (pos != string::npos) {
        cout << "Found at: " << pos << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}