
#include <iostream> 
using namespace std; 

int main() 
{
   int a=16, b=6;
   int n = a*b;
   for(int i=2; i<n; i++){
    for(int j=2; j<=a*i; j++){
        if(a*i == b*j) {
            cout << " i & j : " << i << " " << j << endl << " LCM: " << a*i;
            return 0; 
        } 
    }     
   }
   cout << "LCM is : " << 1;d
}