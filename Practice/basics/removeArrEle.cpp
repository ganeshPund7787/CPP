#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vec = {1,0,3,0,4,0,5,0};

    auto new_end = remove(vec.begin(), vec.end(),0);
    
    vec.erase(new_end, vec.end());

      for (int i : vec) {
        std::cout << i << " ";
    }
}
