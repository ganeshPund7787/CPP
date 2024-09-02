#include <iostream>
using namespace std;

class single {
public:
    void add(int a, int b) {
        cout << a + b ;
    }
};

class two : public single {
    public: 
        void callFunction(){
            add(10, 20);
        }
};

int main() {
    two obj;
    obj.callFunction();
    return 0;
}
