#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};   
    int ans = nums[0];

        for(int i=0; i<nums.size(); i++){
            ans ^= nums[i];
        }
        cout << ans;

        return 0;
}
