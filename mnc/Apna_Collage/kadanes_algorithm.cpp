#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int curSum = 0, maxSum = INT_MIN;

    for(int i : arr){
        curSum += i;
        maxSum = max(curSum,maxSum);
        if(curSum < 0) curSum = 0;
    }

    cout << maxSum;
    return 0;
}
