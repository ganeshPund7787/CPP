#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, i=1, sum = 0, original, count = 0, number_of_digit_count, j=1,k;
    cout << "How many armstrong number you want: ";
    cin >> n;

    if (n <= 0 || cin.fail()) {
        cout << "Invalid input";
        return 0;
    }

    while(count != n){
        number_of_digit_count = 0;
        sum = 0;
        j = i;
        k = i;
        while(j != 0){
            if(i == 153) cout << " j = " << j;
            j /= 10;
            number_of_digit_count++;
        }
        
        while(k != 0) {
            if(i == 153) cout << " | k = " << k;
            sum += pow(k%10,number_of_digit_count);
            if(i == 153) cout << " | Sum = " << sum << endl;
            k /= 10;
        }
         
            if(sum == i){
                // cout << i << " : *********************"<< endl;
                count++;
            }
        // cout << i++ << endl;
        i++;
    }

    return 0;
}
