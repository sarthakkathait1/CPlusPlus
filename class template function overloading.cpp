#include <iostream>
using namespace std;

template <class T>

T display(T a, T b){
    return a+b;
}

int main() {
    cout << display(6.0, 5.7) << endl;
    cout << display(5, 4);
    cout << endl;
    cout << display(4.4, 5.4);
    return 0;
}