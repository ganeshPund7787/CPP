#include<iostream>

using namespace std;

class Truck {
    public:
        void sound(int time,string type){
            cout << time << " , ";
            cout << type;
        }
        void sound(string name){
            cout << name;
        }
};

class highway: public Truck {
    public:
        void sound(int time,string type){
            cout << "Highway : " << time << " , ";
            cout << type;
        }
        void sound(string name){
            cout << name;
        }
};

int main(){

    Truck tata;
    Truck mahindra;
    highway htata;
    // tata.sound("burrm burmm");
    // cout << endl;
    // mahindra.sound(5, "durrm durmm");
    htata.sound(5, "durrm durmm");

    return 0;
}
