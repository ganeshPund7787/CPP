#include<iostream>
using namespace std;

int main(){
    
    float radius, height;
    cout << "Enter a radius: ";
    cin >> radius;

    cout << "Enter a height: ";
    cin >> height;

    if(cin.fail()){
        cout << "Invalid Input";
        return 1;
    }

    float ans = 3.14 * radius * radius * height;
    cout << "The volume of sphere is : " << ans; 
    return 0;
}
