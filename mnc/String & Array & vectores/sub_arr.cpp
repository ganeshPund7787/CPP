#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();

    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            for(int i = start; i<end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
