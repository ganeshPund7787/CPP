#include<iostream>
using namespace std;

int main() {
    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // bool isComposite = false;
    // for(int i=2; i<= num/2 ; i++){
    //     if(num % i == 0){
    //         cout << "number is composite" << " " << i;
    //         isComposite = true;
    //         break;
    //     }
    //     isComposite = false;
    // }
    // if(!isComposite){
    //     cout << "Not mention";
    // }
    
    int i = 65;
    while(i < 91){
        // cout << (char)i << " => " << i << endl;
        i++;
    }

    float radius = 3.23;

    float area = 3.1415 * radius * radius;
    cout << radius << endl;
    
    return 0;
}