#include <iostream>
using namespace std;

int main() {

  for(int i=65; i<= 90; i++){
    // cout << char(i);
  }
    
    int x, y, z;
    cout << "Enter x value : ";
    cin >> x;
    cout << "Enter y value : ";
    cin >> y;
    cout << "Enter z value : ";
    cin >> z;
    
    if(x > y && x > z) {
        cout << "X is greater";
    } else if (y > x && y > z) {
        cout << "y is greater";
    } else{
        cout << "z is greater";
     }

    return 0;
}