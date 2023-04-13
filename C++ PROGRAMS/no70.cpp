#include <iostream>
using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << "variable of base : " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "variable of base : " << var_base << endl;
        cout << "variable of derived : " << var_derived << endl;
    }
};
int main()
{
    base *base_ptr;
    derived obj_derived;
    base_ptr = &obj_derived;
    base_ptr->var_base = 4;
    base_ptr->display();
    derived *derived_ptr;
    derived_ptr = &obj_derived;
    derived_ptr->var_derived = 7;
    derived_ptr->display();
    return 0;
}