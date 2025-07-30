#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n < 0) return 0;
    
    int original = n, rev = 0;
    while(n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    cout << rev << " " << original << " "<< (rev == original ? "Palindrome" : "Not Palindrome");
    return 0;
}