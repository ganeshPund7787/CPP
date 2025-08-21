#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {9,3,7,1,5,4,2,8,6};
    int n = arr.size();

    for(int i=0; i<n; i++){
        int currIdx = i;
        for(int j=i; j<n; j++){
            cout << arr[j] << " ";
            if(arr[currIdx] > arr[j]){
                currIdx = j;
            }
        }
        swap(arr[currIdx], arr[i]);
        cout << endl;

    }
     
    cout << endl;
     for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
