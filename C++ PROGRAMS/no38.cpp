#include <iostream>
using namespace std;
class employee
{
private:
    int salary;

public:
    string name;
    int age;
    void setdata(int sal);
    void givedata()
    {
        cout << "name of emp : " << name << endl;
        cout << "age of emp : " << age << endl;
        cout << "salary of the emp per month : " << salary;
    }
};
void employee ::setdata(int sal)
{
    salary = sal;
}
int main()
{
    employee e1;
    e1.name = "debnandan";
    e1.age = 19;
    e1.setdata(100000);
    e1.givedata();
    return 0;
}