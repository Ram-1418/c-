#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;

    Teacher()
    {
        cout << "this is the constructor";
    }

    Teacher(double s, string n)
    {
        salary = s;
        name = n;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    void display()
    {
        cout << "Name" << name << endl;
        cout << "salary" << salary << endl;
    }
};

int main()
{
    Teacher T1(44444, "sham");

    T1.display();

    return 0;
}
