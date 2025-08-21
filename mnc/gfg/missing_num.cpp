#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> arr = {2,1};
      
        int i=0,arrsum=0,idxsum=0;
        for(; i<arr.size(); i++){
            idxsum += i;
            arrsum += arr[i];
        }
        
        cout << arrsum-idxsum;
    return 0;
}