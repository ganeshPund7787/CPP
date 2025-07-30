#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str) {
        cout << char(c + 1) << " ";
    }

    return 0;
}
