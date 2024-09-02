#include <iostream>
using namespace std;

int main() {
    // int a, b;
    // char ch;

    // cout << "Enter first num: ";
    // cin >> a;
    // cout << "Enter second num: ";
    // cin >> b;
    // cout << "Enter operator (+, -, *, /): ";
    // cin >> ch;

    // switch(ch) {
    //     case '+':
    //         cout << "Result: " << a + b << endl;
    //         break;    
    //     case '-':
    //         cout << "Result: " << a - b << endl;
    //         break;    
    //     case '*':
    //         cout << "Result: " << a * b << endl;
    //         break;    
    //     case '/':
    //         if (b != 0) {
    //             cout << "Result: " << a / b << endl;
    //         } else {
    //             cout << "Error: Division by zero" << endl;
    //         }
    //         break;    
    //     default:
    //         cout << "Invalid operator" << endl;
    // }
    
    int arr[3][3] = [1,2,3,4,5,6,7,8,9];

    for(int i=0; i< 3; i++){
        for(int j=0; j< 3; j++){
            cout << arr[i][j];
    }
    cout << endl;
    }

    return 0;
}
