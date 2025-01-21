#include<iostream>
using namespace std;

class Computer {
    public:
    double price;
    string company;
    string storage;
    Computer(){}
    Computer(double price, string company, string storage){
        this->price = price;
        this->company = company;
        this->storage = storage;
    }
};

class lapTop: public Computer {
    public:
    string battery;
    bool charger;
};

int main(){

    Computer ob1(20000, "Lenovo", "512GB");
    cout << endl << "This is an first Object: " << endl;
    cout << ob1.price << endl;
    cout << ob1.company << endl;
    cout << ob1.storage << endl;

    lapTop ob2;
    cout << endl << "This is an second Object: " << endl;
     ob2.charger = true;
     ob2.battery = "12VH";
     ob2.price  = 400000;
     ob2.company = "Dell";
     ob2.storage = "256GB";
 
    cout << ob2.charger << endl;
    cout << ob2.battery << endl;
    cout << ob2.price << endl;
    cout << ob2.company << endl;
    cout << ob2.storage << endl;
    
    return 0;
}


