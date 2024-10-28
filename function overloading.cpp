#include <iostream>
using namespace std;

void sum(int w, int x)
{
    cout << "Sum = " << w + x << endl;
}

void sum(int w, int x, int y)
{
    cout << "Sum = " << w + x + y << endl;
}

void sum(int w, int x, int y, int z)
{
    cout << "Sum = " << w + x + y + z;
}

int main()
{

    sum(20, 39);
    sum(20, 39, 55);
    sum(123, 432, 12, 0);

    return 0;
}