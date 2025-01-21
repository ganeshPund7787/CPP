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

void change(Person* p){
    p->name = "Sunil"; // (*p).name = "Sunil";
    p->age = 12; // (*p).age = 12;
}

int main(){
    Person p1(19, "Ganesh");
    
    cout << p1.name << endl;
    cout << p1.age << endl;
    change(&p1);
    cout << p1.name << endl;
    cout << p1.age << endl;

    return 0;
}


