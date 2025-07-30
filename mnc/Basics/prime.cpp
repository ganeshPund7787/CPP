#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 2) {
        cout << "Not a prime number";
        return 0;
    }
    if (n == 2) {
        cout << "Even Prime number";
        return 0;
    }
    if (n % 2 == 0) {
        cout << "Not a prime number";
        return 0;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            cout << "Not a prime number";
            return 0;
        }
    }

    cout << "Prime number";
    return 0;
}
