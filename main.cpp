#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string name;
    getline(cin, name);

    cout << "Initials: ";

    for (int i = 0; i < name.length(); i++) {
        if (i == 0 || name[i - 1] == ' ') {
            cout << (char)toupper(name[i]) << ".";
        }
    }

    cout << endl;

    return 0;
}