#include<iostream>
using namespace std;

class Farmer {
    public:
        string name;
        double mno;
        int farm;

        Farmer(){}
        Farmer(string name, double mno, int farm){
            this->name  = name;
            this->mno  = mno;
            this->farm  = farm;
        }
};

int main(){
    Farmer* f1 = new Farmer("Ganesh", 5455445, 1);
    cout << f1->name << endl;
    return 0;
}
