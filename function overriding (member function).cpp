#include <iostream>
using namespace std;

class A{
    public:
    int a;
    A(int a){
        this->a = a;
    }
    void operator ++(){
        a = a+5;
        cout << a << endl;
    }
    void operator -(){
        a = a-1;
        cout << a << endl;
    }
    void operator ~(){
        a = ~(a);
        cout << a;
    }
};
int main() {
    A ob(8);
    ++ob;
    -ob;
    ~ob;
    return 0;
}