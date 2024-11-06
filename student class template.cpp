#include <iostream>
using namespace std;

template <class T1, class T2, class T3, class T4>

class Student
{
public:
    T1 name;
    T2 age;
    T3 course;
    T4 department;
    Student(T1 n, T2 a, T3 c, T4 dpt) : name(n), age(a), course(c), department(dpt) {}
    void display()
    {
        cout << name << endl
             << age << endl
             << course << endl
             << department;
    }
};
int main()
{
    Student obj("Sarthak", 19, "B. Tech", "Computer Science");
    obj.display();
    return 0;
}