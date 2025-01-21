#include <iostream>
using namespace std;

class Computer {
private:
    double price;
    string company;
    string storage;

public:
    Computer(double price, string company, string storage) {
        this->price = price;
        this->company = company;
        this->storage = storage;
    }

    void display() {
        cout << "Price: " << price << endl;
        cout << "Company: " << company << endl;
        cout << "Storage: " << storage << endl;
    }
};

int main() {
    Computer ob1(20000, "Lenovo", "512GB");
    ob1.display();

    return 0;
}
