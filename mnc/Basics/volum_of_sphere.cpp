#include<iostream>
using namespace std;

int main(){
    
    float radius;
    cout << "Enter a radius: ";
    cin >> radius;

    if(cin.fail()){
        cout << "Invalid Input";
        return 1;
    }
    float ans = (4 *  3.14 * radius * radius * radius) / 3;
    cout << "The volume of sphere is : " << ans; 
    return 0;
}