#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {3,2,2,3};    
    int val = 3;

    for(int i = 0; i < nums.size(); ){
        if(nums[i] == val){
            nums.erase(nums.begin() + i); 
        } else {
            i++; 
        }
    }     

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }     

    return 0;
}
