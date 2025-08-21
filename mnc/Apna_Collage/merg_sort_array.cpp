#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,4,5};
    int m = 3, n = 3;
    int i = m-1, j = n-1, idx = nums1.size()-1;
  
    while(i >= 0 && j >= 0){
        if(nums1[i] >= nums2[j]){
            nums1[idx--] = nums1[i--];
        } else {
            nums1[idx--] = nums2[j--];
        }
    }
 
    while(j >= 0){
        nums1[idx--] = nums2[j--];
    }

    for(int i=0; i<nums1.size(); i++){
        cout << nums1[i] << " ";
    }
        return 0;
}