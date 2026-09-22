#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "I love C++ programming";
    string sub = "C++";

    size_t pos = text.find(sub);

    if (pos != string::npos) {
        cout << "Position: " << pos << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}