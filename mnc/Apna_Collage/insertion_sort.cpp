#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {9,3,7,1,5,4,2,8,6};
    int n = arr.size();

    for(int i=1; i<n; i++){
        int curr = arr[i];
        for(int j=i; j>=0; j--){
            if(j == 0) {
                arr[j] = curr;
            }
            if(arr[j] > curr){
                arr[j+1] = arr[j];
            } else {
                arr[j+1] = curr;
                break;
            }
        }
    }
     
    cout << endl;
     for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
