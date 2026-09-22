#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, word;

    getline(cin, sentence);
    getline(cin, word);

    size_t pos = sentence.find(word);

    if (pos != string::npos) {
        cout << "The word \"" << word << "\" is found at position " << pos << "." << endl;
    } else {
        cout << "The word \"" << word << "\" is not found." << endl;
    }

    return 0;
}