// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int> arr ={0,3,8,11,91,5,2};
//     int st = 0, end = arr.size()-1;
    
//     while(st <= end){
//         int mid = st + (end-st)/2;
//         if(arr[st+1] > arr[st]){
//             st++;
//         } else if(arr[end] < arr[end-1]){
//             end--;
//         } else {
//             cout << "Answer: " << arr[mid];
//             return 0;
//         }
//     }
    
//     return 0;
// }

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {0,3,8,11,9,5,2};
    int st = 1, end = arr.size()-2;
    
    while(st <= end){
       int mid = st + (end-st)/2;
       if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return 0;
       } else if(arr[mid] > arr[mid-1]){
            st = mid+1;
       } else {
        end = mid-1;
       }
    }
    
    return 0;
}