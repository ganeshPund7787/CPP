#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = 2;
    for (int i = 1; i <= n; i++){
       a = i;
       for(int j=1; j<=n-i+1; j++){
        cout << "  ";
       }
       for(int k=1; k<=(i*2)-1; k++){
        if(i<k){
            cout << --a - 1 << " ";
        } else {
            cout << a++ << " ";
        }
       }

    cout <<  endl;
    }
    return 0;
}
