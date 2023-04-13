#include <iostream>
using namespace std;
class number
{
    int num;

public:
    number()
    {
        num = 0;
    }
    number(int a)
    {
        num = a;
    }
    number(number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        num = obj.num;
    }
    void print()
    {
        cout << "number is : " << num<<endl;
    }
};
int main()
{
    number x, y, z(45), z2;
    x.print();
    y.print();
    z.print();

    number z1(z);
    z1.print();

    z2 = z;
    z2.print();

    number z3 = z;
    z3.print();
}