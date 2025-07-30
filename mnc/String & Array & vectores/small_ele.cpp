#include<iostream>
#include<cmath>
#include <climits> 
using namespace std;

int main(){
    int arr[] = {1,2,3,4,-589,6,7,8,9,-2,0};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        // if(arr[i] < smallest){
        //     smallest = arr[i];
        // // }
        // if(arr[i] > largest){
        //     largest = arr[i];
        // }
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);

    }

    cout << "Smallest : " << smallest << endl;
    cout << "Largest : " << largest << endl;
    return 0;
}
