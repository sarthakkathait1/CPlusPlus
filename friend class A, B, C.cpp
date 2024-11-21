#include <iostream>
using namespace std;

class A{
    private:
    int a1;
    protected:
    int a2;
    public:
    A(){
        a1 = 1;
        a2 = 2;
    }
    friend class F;
};
class B{
    private:
    int b1;
    protected:
    int b2;
    public:
    B(){
        b1 = 3;
        b2 = 4;
    }
    friend class F;
};
class C{
    private:
    int c1;
    protected:
    int c2;
    public:
    C(){
        c1 = 5;
        c2 = 6;
    }
    friend class F;
};
class F{
    public:
    void display(A &t1, B &t2, C &t3){
        cout << "Class A: " << endl << t1.a1 << " & " << t1.a2 << endl;
        cout << "Class B: " << endl << t2.b1 << " & " << t2.b2 << endl;
        cout << "Class C: " << endl << t3.c1 << " & " << t3.c2 << endl;
    }
};

int main() {
    A ob1;
    B ob2;
    C ob3;
    F f;
    f.display(ob1, ob2, ob3);
    return 0;
}
