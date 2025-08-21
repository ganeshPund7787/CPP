#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    int n = nums.size();
    int low = 0, mid = 0, high = n-1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            mid++,low++;
        } else if(nums[mid] == 1){
            mid++;
        } else {
            swap(nums[high], nums[mid]);
            high--;
        }
    }

    for(int i: nums){
        cout << i << " ";
    }
    return 0;
}
