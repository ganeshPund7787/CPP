#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2 (5,0);
    vector<char> vec3 = {'a','b','c','d'};

  
    
    // Functions in vector
    cout << "Size = " << vec1.size() << endl;
    vec1.push_back(6);
    vec1.pop_back();
    cout << "front = " << vec1.front() << endl;
    cout << "back = " << vec1.back() << endl;
    cout << "At = " << vec1.at(3) << endl;

    for(int i : vec1) cout << i << " ";
      cout << endl;
    return 0;
}
