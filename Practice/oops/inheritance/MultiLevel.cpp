
// #include <iostream>
// using namespace std;

// class one {
//     protected:
//     string name = "Ganesh";
    
//     public:
       
//     };
  
//     class two : public one {
//         public:
       
//     };
    
//     class three : public two {
//         public:
       
// };

// int main() {
//    three p;
//    p.DisplayThree();
   
//     return 0;
// }




// #####Protected #############

#include <iostream>
using namespace std;

class one {
    protected:
    string name = "Ganesh";
    
    public:
        void DisplayOne(){
            cout << "My name is " << name << endl;
        }
    };
  
    class two : public one {
        public:
        void DisplayTwo(){
         cout << "DisplayTwo My name is " << name << endl;
         DisplayOne();
        }
    };
    
    class three : public two {
        public:
        void DisplayThree(){
        //  cout << "DisplayThree My name is " << name << endl;
            DisplayTwo();
        }
};

int main() {
   three p;
   p.DisplayThree();
   
    return 0;
}



// #include <iostream>
// using namespace std;

// class one {
// public:
//     void add(int a, int b) {
//         cout << a + b << endl;;
//         print();
//     }

// private:
//    void print(){
//     cout << "Hello" <<  endl;
//    }
// };

// class two : private one {
//     public: 
//         void callFunction(){
//             add(10, 20);
//         }
       
// };

// class three : public two {
//     public: 
//         void anotherCall(){
//             callFunction();
//         }
// };

// int main() {
//    three p;
//    p.callFunction();
//     return 0;
// }