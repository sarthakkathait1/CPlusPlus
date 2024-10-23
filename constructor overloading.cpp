#include <iostream>
using namespace std;

class A {
    public:
    A(int a, int b) {
        cout << "The sum of two natural numbers is :" << a+b << endl;
    }
    A(float a, float b) {
        cout << "The sum of two natural numbers is :" << a+b << endl;
    }
    A(char a, char b) {
        cout << "The sum of two natural numbers is :" << int(a) + int(b);
    }
    
};

int main() {
    A ob1(3, 4);
    A ob2(16.4f, 54.3f);
    A ob3('a', 'b');
    return 0;
}
