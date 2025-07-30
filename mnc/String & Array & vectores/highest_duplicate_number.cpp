#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {1,2,1,2,1,1,3,3,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxCount = INT_MIN,curCount = 0,ans = 0;
    for(int i=0; i<n; i++){
        curCount = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]) {
                curCount++;
            }
        }    
        if(curCount > maxCount){
            maxCount = curCount;
            ans = arr[i];
        }
    }

    cout << ans << " number is Maximum number of time : " << maxCount;
    return 0;
}
