#include<iostream>
#include<cmath>
using namespace std;
    
class parent {
    public: 
        int addition(int a, int b){
            return a + b;
        }
};

class child : public  parent {
    public:
        int operation(){
            int ans = addition(20,45);
            return ans;
        }
};

int main(){
    child g;
    int ans = g.operation();
    cout << "The answer is : " << ans;
    return 0;
}