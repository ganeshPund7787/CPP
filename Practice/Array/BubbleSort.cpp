#include<iostream>
using namespace std;

int main() {
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++) {
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
                cout << " " << arr[i] << " " << arr[j];
        }   
        cout << endl;
    }

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

