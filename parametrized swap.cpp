#include <iostream>
using namespace std;

class A {
    public:
    int temp;
    A(int a, int b) {
        temp = a;
        a = b;
        b = temp;
        cout << "After Swapping: " << endl;
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
};

int main() {
    int a = 5;
    int b = 6;
    cout << "Before Swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    A ob(a, b);
    return 0;
}
