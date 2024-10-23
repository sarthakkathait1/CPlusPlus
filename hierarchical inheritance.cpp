// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Base{
    protected:
    int a, b;
    public:
    Base(){
        a = 21;
        b = 79;
    }
};
class Derived:public Base{
    public:
    void displayFirst(){
        cout << "First number: " << a << endl;
    }
};
class Derived2:public Base{
    public:
        void displaySecond(){
        cout << "Second number: " << b;
    }
};
int main() {
    Derived ob;
    Derived2 ob2;
    ob.displayFirst();
    ob2.displaySecond();
    return 0;
}