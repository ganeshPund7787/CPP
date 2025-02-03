#include<iostream>
using namespace std;

class Person {
    public:
       string name;
       int age;
       Person(){};
       Person(string n, int a){
        name = n;
        age = a;
       };

       Person(int age,string name ){
        this->name = name;
        this->age = age;
       };

       void Display(){
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
       }

       void Show(Person p){
        cout << "Name: " << p.name << endl;
       }
};

int main(){

    Person p1("Ganesh", 19);
    Person p2;
    p2.name = "Prashu";
    p2.age = 18;

    p1.Display();
    p1.Show(p1);

    return 0;
}


