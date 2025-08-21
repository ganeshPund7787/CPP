#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    vector<int> arr = {100, 180, 260, 310, 40, 535, 695};
    int lowerPrice = arr[0], maxProfit = INT_MIN;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] > lowerPrice){
            maxProfit = max(maxProfit, arr[i] - lowerPrice);
        }
        lowerPrice = min(lowerPrice, arr[i]);
    }

    cout << "maxProfit: " << maxProfit;

    return 0;
}