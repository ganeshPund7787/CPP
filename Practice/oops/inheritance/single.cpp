#include <iostream>
using namespace std;

class single {
    private:
    int age = 20;
    public: 
  void Display(){
    cout << age << endl;
  }
};

// the visibility mode is private here but steel we can access Display()

class two : private single {
    public: 
      void Show(){
        Display();
      }
};

int main() {
    two obj;
    obj.Show();
    return 0;
}
