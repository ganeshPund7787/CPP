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
};

int main(){

    Person p1("Ganesh", 19);
    Person p2;
    p2.name = "Prashu";
    p2.age = 18;

    Person p3 = p1; // Deep mCopy
    p3.name = "vishal";

    Person p4(p2); // Copy Constructor and Deep mCopy
    p4.name = "Pratik";

    Person p5(p1);

    cout << p1.name << " " << p1.age <<  endl;
    cout << p2.name << " " << p2.age <<  endl;
    cout << p3.name << " " << p3.age <<  endl;
    cout << p4.name << " " << p4.age <<  endl;
    cout << p5.name << " " << p5.age <<  endl;
    return 0;
}


