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
    Person suraj(12, "Suraj");
    Person pravin(suraj);
    cout << pravin.age << endl;
     pravin.age = 32;
    cout << pravin.age << endl;
    return 0;
}


