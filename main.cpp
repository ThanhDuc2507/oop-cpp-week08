#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Computer Science";

    string result = text.substr(9, 7);

    cout << result << endl;

    return 0;
}