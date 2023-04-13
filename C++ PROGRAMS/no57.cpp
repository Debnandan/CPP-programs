#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int age;
    employee() {}
    employee(string n, int a)
    {
        name = n;
        age = a;
    }
    void print()
    {
        cout << "name of the employee : " << name << endl;
        cout << "age of the employee : " << age << endl;
    }
};
class programmer : public employee
{
public:
    float salary;
    programmer() {}
    programmer(string n, int a, float sal)
    {
        name = n;
        age = a;
        salary = sal;
    }
    void print()
    {
        cout << "name of the programmer : " << name << endl;
        cout << "age of the programmer : " << age << endl;
        cout << "salary of the programmer : " << salary << endl;
    }
};
int main()
{
    employee e("abc", 19);
    e.print();
    programmer p = programmer("xyz", 21, 100000);
    p.print();
    return 0;
}