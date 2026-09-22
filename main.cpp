#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, id, email, hometown;

    getline(cin, name);
    getline(cin, id);
    getline(cin, email);
    getline(cin, hometown);

    cout << "===== STUDENT PROFILE =====" << endl;
    cout << "Full name   : " << name << endl;
    cout << "Student ID  : " << id << endl;
    cout << "Email       : " << email << endl;
    cout << "Hometown    : " << hometown << endl;
    cout << "===========================" << endl;

    return 0;
}