#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of Array : " ;
    cin >> n ;

    if(n == 0){
        return 0;
    }

    int arr[n], key;

    for(int i=0; i<n; i++){
        cout << "Enter " << i << " Number elemet : ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "Which element do you want to find: ";
    cin >> key;

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element Not Found";
    return 0;
}
