#include<iostream>
using namespace std;

class Person {
    public:
       string name;
       int age;
       Person(){};

       Person(int age,string name ){
        this->name = name;
        this->age = age;
       };
};

int main(){
    Person p1(19, "Ganesh");
    Person* p2 = new Person(20, "Rushi");
    string* p3 = new string("Sagar");
    
    cout << p1.age << " " << p1.name << endl;
    cout << p2->age << " " << p2->name << endl;
    cout << *p3 << endl;
    return 0;
}


