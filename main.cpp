#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int year;

    getline(cin, name);
    cin >> year;

    string username = name;

    for (int i = 0; i < username.length(); i++) {
        if (username[i] == ' ') {
            username.erase(i, 1);
            i--;
        }
    }

    for (int i = 0; i < username.length(); i++) {
        username[i] = tolower(username[i]);
    }

    username += to_string(year);

    cout << "Username: " << username << endl;

    return 0;
}