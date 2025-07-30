#include <iostream>
#include <sstream> 
#include <string>
using namespace std;

int main() {
    string sentence = "I love coding in C++  ";

    istringstream iss(sentence); 
    string word;
    string lastWord; 

    while (iss >> word) {
        lastWord = word; 
    }

    cout << "Last word is: " << lastWord.length() << endl;

    return 0;
}
