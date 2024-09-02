#include<iostream>
using namespace std;

class Scooty {
    public:
        virtual void sound(){
            cout << "Vcroon Vcroon" << endl ;
        }
        // virtual void sound(){}
};

class Bike : public Scooty {
    public:
        void sound(){
            cout << "Broom Broom" << endl ;
        }
};

class SuperBike : public Scooty {
    public:
        void sound(){
            cout << "Zroom Zroom" << endl ;
        }
};

int main(){
    // Bike* b = new Bike();
    // Scooty* s = new Scooty();
    // b->sound();
    // s->sound();

    Scooty* b = new Bike();
    Scooty* s = new SuperBike();
    b->sound(); // Only functions allowood
    s->sound();
    return 0;
}

