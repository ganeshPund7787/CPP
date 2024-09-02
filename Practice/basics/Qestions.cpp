#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << string(n - i, ' ') << string(i * 2 + 1, '*') << endl;
    }

    for(int i = 0; i < n; i++) {
        cout << string(i + 1, ' ') << string((n - i) * 2 - 1, '*') << endl;
    }

    return 0;
}






// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int arr[10] = [0,1,2,3,4,5,6,7,8,9];

//     arr.reverse()
//     return 0;
// }






