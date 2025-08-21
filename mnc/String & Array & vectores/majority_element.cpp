// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main(){
//     vector<int> arr = {1,2,1,2,1,1,3,3,3,1};
//     sort(arr.begin(),arr.end());
//     int count = 0, ans = arr[0];

//     for(int i=1; i<arr.size(); i++){
//         count = 0;
//         if(arr[i] == arr[i-1]) count++;
//         if(count > arr.size()/2) {
//             ans = arr[i];
//             return 0;
//         }
//     }

//     cout << "Answer is : " << ans;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {3,2,3};
    int count = 0, ans = -1;
 
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            ans = nums[i];
        }

        if (nums[i] == ans) {
            count++;
        } else {
            count--;
        }
    }

    cout << "Majority element is: " << ans << endl;
    return 0;
}
