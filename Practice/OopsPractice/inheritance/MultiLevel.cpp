#include<iostream>
using namespace std;

class Animal {
    protected:
       string Check(){
        return "Yes It is Pet Animal! Thank You.";
       }
};

class Dog : public Animal{
    public:
       string PetAnimal(){
        string ans = Check();
        return ans;
       }
};

class AmericanDog : public Dog {
    public:
         void test(){
            cout << PetAnimal() << endl; 
            // cout << Check() << endl; 
         }
};


int main(){
    AmericanDog dog;
    dog.test();
    return 6;
}
