#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 12;
    vector<int> arr;

    for(int i=1; i<n/2+1; i++){
        if(n%i==0) arr.push_back(i);
    }
    for(int i: arr){
        cout << " " << i;
    }
    return 0;
}
