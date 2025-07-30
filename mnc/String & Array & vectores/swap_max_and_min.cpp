#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {11, 23, 45, 83, 47, 1, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxVal = INT_MIN, minVal = INT_MAX, maxIdx = 0, minIdx = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i], maxIdx = i;
        if (arr[i] < minVal) minVal = arr[i], minIdx = i;
        cout << arr[i] << " ";
    }

    swap(arr[minIdx], arr[maxIdx]);
    cout << "\nAfter swap: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
