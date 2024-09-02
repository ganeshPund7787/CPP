#include<iostream>
using namespace std;

class Car {
    public:
    string name;
    int num; 

    Car(){
        cout << "Object Created" << endl;
    }

      Car(string name, int num){
        this->name = name;
        this->num = num;
      }
      
      Car(string name){
        this->name = name;
      }

      Car(int num, string name){
        this->name = name;
        this->num = num;
      }
};

int main(){
   Car c("Thar", 90);
   cout << c.name << endl;

    return 0;
}
