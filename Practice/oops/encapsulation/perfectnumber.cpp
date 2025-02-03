#include <iostream>
using namespace std;

class Perfect {
    public:
    int CkeckPerfect(){
        int number;
  int sumNumber = 0;

    cout << "Enter a number: ";
    cin >> number;

     if(number == 0 || number < 0){
            cout << "Invalid input";
            return 0;
     }

        for(int i=1; i < number; i++){
            if(number % i == 0){
                sumNumber += i; 
            }
        }

        if(sumNumber == number){
            cout << "This is an Perfect number: " << number;
        } else {
            cout << "This is an Not Perfect number: " << number;
        }
    }
};

int main() {

    Perfect ob1;
    ob1.CkeckPerfect();

    return 0;
}
