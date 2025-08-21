#include<iostream>
#include<climits>
using namespace std;

int main(){
   long int n = 123456789;
   long int largest = INT_MIN;
    
    if(n == 0) {
        cout << "Largest number: " << n;
        return 0;
    }
    if(n < 0) n = -n;

    while(n > 0){
        largest = max(largest,n%10);
        n /= 10;
    }
    cout << "Largest number: " << largest;
    return 0;
}