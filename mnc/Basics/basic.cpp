#include<iostream>

#include<cmath>
#include<ctime>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(n/2==j || n/2 == i){
                cout << " *";
            } else {
                cout << "  ";
            }
        }   
        cout << endl;
    }

    return 0;
}
