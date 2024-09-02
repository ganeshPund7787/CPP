#include <iostream>
#include <cmath>
using namespace std;

class Circle {
    public :
        int calArea(int area){
            return M_PI * area * area;
        }
};

class findArea : public Circle {
    public:
        int operatrion(int area){
            int ans = calArea(area);
            return ans;
        }
};

int main(){
    findArea o;
    int answer = o.operatrion(23);
    cout << "The area of circle is : " << answer;
    return 0;
}

