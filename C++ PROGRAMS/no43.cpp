#include <iostream>
using namespace std;
class employee
{
private:
    string name;
    int salary;

public:
    void set_data(void)
    {
        cout << "enter name : ";
        cin >> name;
        cout << "enter salary : ";
        cin >> salary;
    }
    void display_data(void)
    {
        cout << endl;
        cout << "name of emp : " << name << endl;
        cout << "salary of emp : " << salary << endl;
    }
};
int main()
{
    int num;
    cout << "enter total number of employees : ";
    cin >> num;
    employee e[num];
    for (int i = 0; i < num; i++)
    {
        e[i].set_data();
    }
    for (int i = 0; i < num; i++)
    {
        e[i].display_data();
    }
    return 0;
}