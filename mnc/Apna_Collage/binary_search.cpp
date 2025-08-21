#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {3,4,5,6,7,0,1,2}; 
    sort(arr.begin(), arr.end()); 
    int tar = 0;
    int st = 0, end = arr.size() - 1;

    while (st <= end) { 
        int mid = st + (end - st) / 2;

        if (tar < arr[mid]) {
            end = mid - 1;
        } else if (tar > arr[mid]) {
            st = mid + 1;
        } else {
            cout << "Found at index: " << mid;
            return 0;
        }
    }

    cout << "Not found";
    return 0;
}



