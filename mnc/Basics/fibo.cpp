#include<iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1;
    cout << "Enter number of Fibonacci terms: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
