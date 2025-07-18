// #include<iostream>
// using namespace std;

// int power(int base, int exponent ) {
//     int result = 1;
//     for(int i = 0; i < exponent; i++)
//         result *= base;

//     return result;
// }

// int main() {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     if(n == 0 || cin.fail()){
//         printf("This is an Invalid input");
//         return 0;
//     }
//     int m = n, o = n;
//     int count = 0;
    
//     while(n != 0){
//         n = n/10; 
//         count++;
//     }

//     int result = 0;

//     while(m != 0){
//         int ans = power(m%10, count);
//         result += ans;
//         m = m/10;
//     }

//     if(o == result){
//         printf("This is an armstrong number");
//     } else {
//         printf("This is not an armstrong number");
//     }

//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, original, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0 || cin.fail()) {
        cout << "Invalid input";
        return 0;
    }

    original = n;
    for (int temp = n; temp; temp /= 10) digits++;

    for (int temp = n; temp; temp /= 10)
        sum += pow(temp % 10, digits);

    cout << (sum == original ? "This is an Armstrong number" : "This is not an Armstrong number");
    return 0;
}
