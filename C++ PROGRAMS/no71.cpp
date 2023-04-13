#include <iostream>
using namespace std;
class base
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "variable of base : " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived = 2;
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
    base_ptr->display();
    return 0;
}