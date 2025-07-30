#include<iostream>
#include<vector>
using namespace std;

int findSum(int arr[], int target, int size, vector<int>& vec) {
    int i = 0, j = size - 1;

    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum < target) i++;
        else if (sum > target) j--;
        else {
            vec.push_back(i);
            vec.push_back(j);
            return 1;
        }
    }
    return 0;
}

int main() {
    vector<int> vec;
    int arr[] = {2, 7, 11, 15, 17};
    int target = 32;
    int n = sizeof(arr) / sizeof(arr[0]);

    findSum(arr, target, n, vec);

    for (int i : vec) cout << i << " ";
    return 0;
}
