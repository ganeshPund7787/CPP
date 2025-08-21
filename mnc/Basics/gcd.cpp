#include<iostream>
using namespace std;

int main() {
    int a = 45, b = 65;
    int gcd = 1;
    for(int i=1; i<a/2; i++){
        if(a%i==0 && b%i==0) gcd = i;
    }
    cout << "Greatest Common Divisor: " << gcd;
    return 0;
}
