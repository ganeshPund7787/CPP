#include<iostream>
using namespace std;

class Emp{
    public: 
        int eid;
        double* esalaryPtr;
    Emp(int eid, double esalary){
        this->eid = eid;
        esalaryPtr = new double;
        *esalaryPtr = esalary;
    }    
};

int main(){
    Emp(1, 21300.3);
    return 0;
}