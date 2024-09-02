#include<iostream>

using namespace std;

class Person {
    protected:
       bool cheack(int age){
           return age >= 18;
       }
};  

class Voter: public Person {
    public:
        string CheckAge(int age){
            bool responce = cheack(age);
            if(responce){
                return "You are eligible";
            }else {
                return "You are not eligible";
            }
        }
};

int main(){
    Voter Prashant;
    int age;
    cout << "Enter the age: ";
    cin >> age;
    string ans = Prashant.CheckAge(age);
    cout << endl << ans;
    return 0;
}

