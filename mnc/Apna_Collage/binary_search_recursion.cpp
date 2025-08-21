#include<iostream>
#include<vector>
using namespace std;

int findTarget(vector<int>& arr,int st,int end,int tar){
    int mid = st + (end-st)/2;
    if(arr[mid] == tar){
        return mid;
    }

    if(tar < arr[mid]){
        return findTarget(arr,st,mid-1,tar);
    } else if(tar > arr[mid]){
        return findTarget(arr,mid+1,end,tar);
    } 
}

int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9};
    int st = 0, end = arr.size() -1, tar = 8;
    cout<< "Start >> " << endl;
    int ans = findTarget(arr,st,end,tar);
    cout << "Answer: " << ans;
    return 0;
}