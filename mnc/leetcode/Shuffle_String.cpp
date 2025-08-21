#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> indices = {4,5,6,7,0,2,1,3};
    string s = "codeleet";
    int n = indices.size();
    string ans(n,'#');

    for(int i=0; i<indices.size(); i++){
        int idx = indices[i];
        ans[idx] = s[i];
    }

    for(int i=0; i<ans.length(); i++){
        cout << ans[i] << ", ";
    }

    return 0;
}
