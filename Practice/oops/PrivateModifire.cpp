#include<iostream>
using namespace std;

class Person {
    public:
        Person(string gender,string name,int age){
            this->gender = gender;
            this->name = name;
            this->age = age;
        }
        void getPerson(){
            cout << this->gender << endl;
            cout << this->name << endl;
            cout << this->age << endl;
        }
        void changeName(string name){
            this->name = name;
        }
    private:
         string gender;
         string name;
         int age;
         Person(){}
};


int main(){
    Person p("Male", "Ganu", 19);
    p.getPerson();
    p.changeName("Ganesh");
    p.getPerson();
    return 0;
}
