#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8};
    int n = vec.size();
    int a = 7;

    int mid = (n / 2) - 1;
    bool found = false;

    int start = (a > vec[mid]) ? mid + 1 : 0;

    for (int i = start; i < n; i++) {
        if (vec[i] == a) {
            cout << "Found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << "Not found";

    return 0;
}
