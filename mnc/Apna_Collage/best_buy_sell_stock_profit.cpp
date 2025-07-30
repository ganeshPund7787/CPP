#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {7,1,5,3,6,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int bestPrice = arr[0], maxProfit = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > bestPrice){
            maxProfit = max(maxProfit,arr[i]-bestPrice);
        }
        bestPrice = min(bestPrice,arr[i]);
    }

    cout << maxProfit;
    return 0;
}
