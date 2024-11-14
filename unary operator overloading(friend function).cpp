#include <iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    A(int a){
        this->a = a;
    }
    friend void operator ++(A& obj);
    friend void operator --(A& obj);
    friend void operator -(A& obj);
};
    void operator ++(A& obj){
        obj.a = obj.a+5;
        cout << obj.a << endl;
    }
    void operator --(A &obj){
        obj.a = obj.a-1;
        cout << obj.a << endl;
    }
    void operator -(A &obj){
        obj.a = -(obj.a);
        cout << obj.a;
    }
int main() {
    A ob(8);
    ++ob;
    --ob;
    -ob;
    return 0;
}
