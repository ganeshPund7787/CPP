#include <iostream>

using namespace std; 

using std::cout;
using std::endl;

namespace MyNameSpace {
    void display(){
        std::cout << "My Name Space" << std::endl;
    }
}

int main(){

    MyNameSpace::display();

    std::cout << "Hello from Ganesh" << std::endl;
    std::cout << "Hello from std" << std::endl;

    cout << "Using from std (using)";
    return 0;
}


