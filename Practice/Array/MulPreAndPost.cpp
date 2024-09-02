#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a array Size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter " << i << " element : ";
        cin >> arr[i];
    }

    int preVal = arr[0];
    
    for(int i=0; i<n; i++){
        int pre = preVal;
        if(i == 0 ){
            arr[i] = arr[i] * arr[i+1];    
        } else if(i == n-1){
            arr[i] = pre * arr[i];    
        } 
        else{
            preVal = arr[i];
            arr[i] = pre  * arr[i+1];
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

