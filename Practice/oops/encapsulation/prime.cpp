#include <iostream>
using namespace std;

class Prime {
    public:
    int CheckPrime(){
        int number, i;
        bool isPrime = true;

        cout << "Enter a number: ";
        cin >> number;

        if(number == 0 || number < 0){
            cout << "Invalid input";
            return 0;
        }

        for(int i=2; i * i < number; i++){
            if(number % i == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout << "This is prime number";
        } else {
            cout << "This is Not prime number";
        }
    }
};

int main() {

    Prime ob1;
    ob1.CheckPrime();

    return 0;
}
