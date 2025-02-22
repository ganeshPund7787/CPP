#include <iostream>
using namespace std;

class A {
public:
    string name = "Ganesh";
    int Display() {
        return 10 + 20;
    }
};

class B : public A {
public:
    int Display() {
        return 10 + 20;
    }
};

class C : public A {
public:
    int Display() {
        return 10 + 20;
    }
};

class D : public C, public B {
public:
    void Display() {
        B::Display(); 
        C::Display(); 
    }
};

int main() {
    C obj;
    // obj.Display();  

    D d_obj;
    cout << d_obj.Display(); 
    
    return 0;
}
