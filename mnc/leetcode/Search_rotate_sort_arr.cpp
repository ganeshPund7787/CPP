#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int tar = 6;

    int mid = arr.size()/2;
    int start = arr[mid-1] < tar ? mid : 0;
    
    for(; start < arr.size(); start++){
        cout << arr[start] << " ";
    }
    
    return 0;
}
