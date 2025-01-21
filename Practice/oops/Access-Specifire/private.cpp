#include<iostream>
using namespace std;

class Computer {
    private:
    double price;
    string company;
    string storage;

    public:
    Computer(double price, string company, string storage){
        this->price = price;
        this->company = company;
        this->storage = storage;
    }

    void display(){
        cout << this->price = price << endl;
        cout << this->company = company << endl; 
        cout << this->storage = storage << endl; 
    }
};


int main(){

   Computer ob1(20000, "Lenovo", "512GB");
    

    return 0;
}


