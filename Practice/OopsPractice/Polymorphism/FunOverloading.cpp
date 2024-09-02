#include<iostream>
using namespace std;

class Car {
    // private:
    //     int showCarDetail(string name){
    //     cout << name << endl;
    //    }

    public: 
       void showCarDetail(string name){
        cout << name << endl;
       }
       
       void showCarDetail(string name,int n){
        cout << name <<  " " << n << endl;

       }

       void showCarDetail(string model, string company){
        cout << model << "" << company << endl;
       }

};

int main(){
   Car c;
   c.showCarDetail("Scarpio");
   c.showCarDetail("Thar", 7987);
   c.showCarDetail("4 x 4", "Tata");

    return 0;
}
