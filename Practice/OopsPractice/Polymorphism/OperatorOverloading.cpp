#include<iostream>
using namespace std;

class Fraction {
    public:
    int num;
    int dem;
    Fraction(  int num , int dem){
        this->num = num;
        this->dem = dem;
    }
    void show(){
        cout << this->num << " / " << this->dem << endl;;  
    }

    Fraction operator+(Fraction f){            //operator overloading
        int numNum = this->num * f.dem + f.num * this->dem;
        int newDem = this->dem * f.dem;
        Fraction ans(numNum, newDem);
        return ans;
    }

    Fraction operator-(Fraction f){             //operator overloading
        int numNum = this->num * f.dem - f.num * this->dem;
        int newDem = this->dem * f.dem;
        Fraction ans(numNum, newDem);
        return ans;
    }

    Fraction operator*(Fraction f){             //operator overloading
        int numNum = this->num*f.num;
        int newDem = this->dem * f.dem;
        Fraction ans(numNum, newDem);
        return ans;
    }
};

int main(){
    Fraction f1(1,2);
    Fraction f2(1,4);
    f1.show();
    f2.show();
    // Fraction f3 = f1.add(f2);
     Fraction f3 = f1 + f2;
     Fraction f4 = f1 - f2;
     Fraction f5 = f1 * f2;

    f3.show();
    f4.show();
    f5.show();
}
