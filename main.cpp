#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "apple";
    string s2 = "apple";
    string s3 = "banana";

    cout << s1.compare(s2) << endl;
    cout << s3.compare(s1) << endl;

    return 0;
}