#include<iostream>
using namespace std;

class Vehical {
   public:
    string make;
    string model;
    int year;
};  

class Car: public Vehical {
    public:
     int numberOfDoors;
    Car(string make, string model, string year, int numberOfDoors){
         this->make  = make;
         this->model = model;
         this->year  = year;
         this->numberOfDoors = numberOfDoors;  
     }
     Car(){
        cout << make << endl;
        cout << model << endl;
        cout << year << endl;
        cout << numberOfDoors << endl;
     }
};

int main(){
    Car c("dafdg","sdfgsdfg",2020, 5);

    return 0;
}

