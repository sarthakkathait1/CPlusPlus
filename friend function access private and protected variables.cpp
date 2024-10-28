#include <iostream>
using namespace std;

class B;
class C;

class A
{
private:
    int a1;

protected:
    int a2;

public:
    A()
    {
        a1 = 1;
        a2 = 2;
    }
    friend void friendFunction(A &obj1, B &obj2, C &obj3);
};
class B
{
private:
    int b1;

protected:
    int b2;

public:
    B()
    {
        b1 = 3;
        b2 = 4;
    }
    friend void friendFunction(A &obj1, B &obj2, C &obj3);
};
class C
{
private:
    int c1;

protected:
    int c2;

public:
    C()
    {
        c1 = 5;
        c2 = 6;
    }
    friend void friendFunction(A &obj1, B &obj2, C &obj3);
};

void friendFunction(A &obj1, B &obj2, C &obj3)
{

    cout << "Class A: " << endl;
    cout << "Private Variable: " << obj1.a1 << endl;
    cout << "Protected Variable: " << obj1.a2 << endl;

    cout << "Class B: " << endl;
    cout << "Private Variable: " << obj2.b1 << endl;
    cout << "Protected Variable: " << obj2.b2 << endl;

    cout << "Class C: " << endl;
    cout << "Private Variable: " << obj3.c1 << endl;
    cout << "Protected Variable: " << obj3.c2 << endl;
}

int main()
{
    A ob1;
    B ob2;
    C ob3;
    friendFunction(ob1, ob2, ob3);
    return 0;
}