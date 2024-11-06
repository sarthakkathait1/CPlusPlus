#include <iostream>
using namespace std;

template <class T1, class T2, class T3, class T4>

struct Student
{
    T1 name;
    T2 age;
    T3 course;
    T4 department;
    Student(T1 n, T2 a, T3 c, T4 dpt) : name(n), age(a), course(c), department(dpt) {}

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department;
    }
};
int main()
{
    Student s1("Sarthak", 19, "B. Tech", "Computer Science");
    s1.display();
    return 0;
}