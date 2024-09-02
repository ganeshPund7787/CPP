#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0){
            arr[i] *= arr[i];
        }else {
            arr[i] += 1;
        }
    }

     for (int i = 0; i < 5; i++){
        //  cout << arr[i] << " ";
     }

     int a = 5, b = 10;

     a = a + b;
     b = a - b;
     a = a - b;
     cout << "A: " << a << endl ;  
     cout << "B: " << b << endl ;  
    return 0;
}

