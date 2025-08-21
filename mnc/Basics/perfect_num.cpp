#include<iostream>
using namespace std;

int main(){
    int n = 5,sum=0;

    for(int i=1; i<n; i++){
        if(n%i==0) sum += i;
    }

    cout << (sum == n ? "Perfect Number" : "Not Perfect Number");
    return 0;
}