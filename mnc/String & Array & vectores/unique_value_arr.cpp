#include <iostream>
#include <climits>
#include <algorithm> 

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 8, 1, 2, 3};
    int unique = 0, n = sizeof(arr) / sizeof(arr[0]);
    bool isUnique = true;
    
    for(int i=0; i<n; i++){
       isUnique = true;
      for(int j=0; j<n; j++){
        if(arr[i] == arr[j] && j != i){
            isUnique = false;
            break;
        }
      }
      if(isUnique){
        unique = arr[i];
        break;
      }
    }

    if(!isUnique) cout << "No unique element";
    else cout << "Unique number is: " << unique;

    return 0;
}
