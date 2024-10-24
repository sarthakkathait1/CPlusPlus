#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

protected:
    string department;
    string course;

public:
    Student()
    {
        name = "Sarthak";
        age = 19;
        department = "School of Technology";
        course = "B. Tech";
    }

    // friend function declaration
    friend void displayStudent(Student &obj);
};

void displayStudent(Student &obj)
{
    cout << "Name: " << obj.name << endl;
    cout << "Age: " << obj.age << endl;
    cout << "Department: " << obj.department << endl;
    cout << "Course: " << obj.course;
}

int main()
{
    Student obj;
    displayStudent(obj);

    return 0;
}
