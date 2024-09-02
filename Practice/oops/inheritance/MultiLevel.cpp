#include <iostream>
using namespace std;

class one {
public:
    void add(int a, int b) {
        cout << a + b << endl;;
        print();
    }

private:
   void print(){
    cout << "Hello" <<  endl;
   }
};

class two : private one {
    public: 
        void callFunction(){
            add(10, 20);
        }
       
};


class three : public two {
    public: 
        void anotherCall(){
            callFunction();
        }
};

int main() {
   three p;
   p.callFunction();
    return 0;
}
