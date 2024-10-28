#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A()
    {
        a = 23;
    }
    friend class B;
};
class B
{
public:
    void checkPrime(A &t)
    {
        int i;
        int k = 0;

        for (int i = 1; i <= t.a; i++)
        {
            if (t.a % i == 0)
                k++;
        }
        if (k == 2)
            cout << "Prime number. ";
        else
            cout << "Not a prime number.";
    }
};

int main()
{
    A ob;
    B ob1;
    ob1.checkPrime(ob);
    return 0;
}
