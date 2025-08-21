#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {9,3,7,1,5,4,2,8,6};
    int n = arr.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
