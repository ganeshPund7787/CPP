#include<iostream>
#include<typeinfo>

using namespace std;

int main() {
    int a,b,ans;
    char ope;
    cout << "Enter a first number : ";
    cin >> a;
    
    cout << "Enter a second number : ";
    cin >> b;    
    
    cout << "which operation do you want to perform : ";
    cin >> ope;
    
    
  
     cout <<  typeid(typeid(a).name()).name() << typeid(a).name() << typeid(b).name() << typeid(ope).name();


}
