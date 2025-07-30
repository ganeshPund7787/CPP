// #include<iostream>
// #include<string>
// #include <algorithm>

// using namespace std;

// int main(){
//     string str,ans;
//     int i = 0;
//     cout << "Enter a string: ";
//     getline(cin, str);  

//     while(i < str.length()) ans += str[str.length() - i++ - 1];

//     cout << ans;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int l = 0, r = str.length() - 1;
    while(l < r)
        swap(str[l++], str[r--]);

    cout << str;
    return 0;
}
