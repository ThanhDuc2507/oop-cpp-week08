#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello C++";

    int countAll = text.length();
    int countWithoutSpaces = 0;

    for (char c : text) {
        if (c != ' ') {
            countWithoutSpaces++;
        }
    }

    cout << countAll << endl;
    cout << countWithoutSpaces << endl;

    return 0;
}