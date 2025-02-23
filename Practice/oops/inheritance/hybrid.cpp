#include <iostream>
using namespace std;

class A {
public:
    string name = "Ganesh";
     void Display() {  
        cout << "Hello, A!" << endl;
    }
};

class B :  public A {
public:
    void Display() {
        cout << "Hello, B!" << endl;
    }
};

class C :  public A {
public:
    void Display() {
        cout << "Hello, C!" << endl;
    }
};

class D : public B, public C {
public:
    void Display() {
        B::Display(); 
        C::Display(); 
    }
};

class E : public D {
public:
    void Display() {
        cout << "Hello, E!" << endl;
    }
};

class F : public D {
public:
    void Display() {
        cout << "Hello, F!" << endl;
    }
};

class G : public E, public F {
public:
    void Display() {
        E::Display();
        F::Display();
    }
};

int main() {  
    G obj;
    D obj2;
    obj2.Display(); 
    obj.Display(); 

    return 0;
}


