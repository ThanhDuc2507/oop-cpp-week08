#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";

    string part1 = s.substr(0, 5);
    string part2 = s.substr(6, 5);

    cout << part1 << endl;
    cout << part2 << endl;

    return 0;
}