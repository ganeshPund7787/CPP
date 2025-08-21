#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 

int main() 
{
    int n = 5;

    for(int i=1; i<=n; i++){
        cout << string(n - i, ' ') ;
        int j=1;
        for(j=1; j<=i/2; j++){
            cout << j << " ";
        }
        
        for(int k=i-1; k > 0; k--){
            cout << k << " ";
        }    
        cout << endl;
    }
    
}