#include <iostream>
using namespace std;

class Base{
    protected:
    float a, b;
    public:
    Base(){
        a = 55.4;
        b = 60.1;
    }
};
class Derived:public Base{
    public:
    void Product(){
        cout << "Product = " << a*b;
    }
};
int main() {
    Derived ob;
    ob.Product();
    return 0;
}