#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){ 
    vector<int> nums = {1,1,2};
       for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                 nums.erase(nums.begin() + i);
            } else i++;
        }

        for(int i:nums) cout << i << " ";
        
    return 0;
}