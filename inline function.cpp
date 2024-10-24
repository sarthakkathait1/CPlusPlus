#include <iostream>
using namespace std;

class Student
{
public:
    int a, b;
    Student()
    {
        a = 20;
        b = 30;
    }

    inline int sum() { return a + b; }
};
int main()
{
    Student ob;
    cout << "Sum = " << ob.sum();
}