#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "I like Java";

    text.replace(7, 4, "C++");

    cout << text << endl;

    return 0;
}