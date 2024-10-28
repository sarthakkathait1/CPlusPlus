#include <iostream>
using namespace std;

inline int sum(int x, int y) {return x + y ;}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;
    cout << "Sum = " << sum(a, b);
    
    return 0;
}