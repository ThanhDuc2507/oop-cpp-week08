#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Length of the sentence: " << sentence.length() << endl;

    size_t pos = sentence.find("C++");

    if (pos != string::npos) {
        cout << "Found \"C++\" at position: " << pos << endl;
        cout << "Extracted word: " << sentence.substr(pos, 3) << endl;

        sentence.replace(pos, 3, "Programming");
        cout << "New sentence: " << sentence << endl;
    } else {
        cout << "The word \"C++\" was not found in the sentence." << endl;
    }

    return 0;
}
