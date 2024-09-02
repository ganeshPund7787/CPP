#include<iostream>
using namespace std;

class Animal {
    public:
       string Check(){
        return "Yes Animal!";
       }
};

class Pet {
    public:
        string CheckPet(){
        return "Yes It is Pet Animal! Thank You.";
       } 
};

class Cat: public Animal, public Pet {
    public: 
        void isCat(){
            cout << "I am a Cat." << endl;
        }
};

int main(){
    Cat c;
    c.isCat();
    cout << c.Check() << endl;
    cout << c.CheckPet() << endl;

    return 6;
}
