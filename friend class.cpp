#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number()
    {
        a = 31;
    }
    friend class Prime;
};
class Prime
{
private:
    int k;

public:
    int checkPrime(Number &t)
    {
        int k = 0;
        for (int i = 1; i <= t.a; i++)
        {
            if (t.a % i == 0)
                k++;
        }
        if (k == 2)
            return true;
        else
            return false;
    }
};
int main()
{
    Number n;
    Prime p;
    if (p.checkPrime(n))
        cout << "Prime number. ";
    else
        cout << "Not a Prime number. ";
    return 0;
}
