#include <iostream>
using namespace std;

class Emp {
public:
    string name;
    double salary;
    
    Emp() {}

    
    Emp(string name, double salary) {
        this->name = name;
        this->salary = salary;
    }

    void GetMe() {
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
    }

    void IncSal() {
        this->salary += 2000;
    }

    void IncSal(double sal) {
        this->salary += sal;
    }
};

class Workers : public Emp {
public:
    double bonus;
    
    Workers() : Emp() {
        this->bonus = 0.0;
    }

    
    Workers(string name, double salary, double bonus) : Emp(name, salary) {
        this->bonus = bonus;
    }

    int GetBonus() {
        this->bonus += 1000;
        return bonus;
    }

    int GetBonus(int price) {
        this->bonus += price;
        return bonus;
    }
};

int main() {
    
    Emp e1("Ganesh", 25000);
    Emp e2("Prashant", 25000);

    
    Workers e3("Vishal", 25000, 1000);
    Workers e4("Pratik", 25000, 2000);

    
   
    return 0;
}
