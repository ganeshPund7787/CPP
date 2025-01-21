
#include<iostream>
using namespace std;

class Tata {
   public: 
    void tatanano () {
        cout << "Tata Nano Car" << endl;
    }
    protected: 
    int add (int a,int b) {
        return a+b;
    }
};

class Tesala : Tata{
    public: 
        void driverless () {
            tatanano();
        cout << "Nikola tesala" << endl;
        cout<<add(1,1);
        }
};

int main(){
    Tesala a;
    a.driverless();
    return 0;
}
