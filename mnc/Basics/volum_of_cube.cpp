#include<iostream>
using namespace std;

int main(){
    
    float side1;
    cout << "Enter a side size: ";
    cin >> side1;

    if(cin.fail()){
        cout << "Invalid Input";
        return 1;
    }

    float cube = side1 * side1 * side1;
    
    cout << "The volume of cube is : " << cube; 
    return 0;
}