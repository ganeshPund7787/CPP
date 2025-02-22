    #include <iostream>
    using namespace std;

    class one {
    public:
        string name = "Ganesh";
        void Display(){
            cout << "My name is " << name << endl;
        }
    };
    
    class two : public one {
    public:
        void Display(){
            cout << "My name is " << name << endl;
        }
    };
        
    class three : public two {
    public:
        void Display(){
            cout << "Three My name is " << name << endl;
        }
    };

    int main() {
        three p;
        p.Display();
        
        return 0;
    }

// ######## OverLoading ###################

//     #include <iostream>
// using namespace std;

// class one {
// public:
//     string name = "Ganesh";
    
//     // First Display: no parameters
//     void Display(){
//         cout << "My name is " << name << endl;
//     }
    
//     // Overloaded Display: accepts a string parameter
//     void Display(const string& title){
//         cout << title << " " << name << endl;
//     }
// };

// int main() {
//     one obj;
    
//     // Calls the Display() with no parameters:
//     obj.Display();
    
//     // Calls the overloaded Display() with one string parameter:
//     obj.Display("Mr.");
    
//     return 0;
// }
