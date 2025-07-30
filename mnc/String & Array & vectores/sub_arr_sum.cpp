#include<iostream>
#include<vector>
#include<climits> 
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    int maxSum = INT_MIN; 
    for(int start = 0; start<n; start++){
        int currentSum = 0;
        for(int end = start; end<n; end++){
            currentSum += arr[end];
            maxSum = max(currentSum,maxSum);
        }
    }

    cout << maxSum;
    return 0;
}
