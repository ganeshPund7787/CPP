#include <iostream>
using namespace std;

class Base1 {
public:
    void show1() {
        cout << "Base1 class function" << endl;
    }
};

class Base2 {
public:
    void show2() {
        cout << "Base2 class function" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void showDerived() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Derived d;
    d.show1();
    d.show2();
    d.showDerived();
    return 0;
}
