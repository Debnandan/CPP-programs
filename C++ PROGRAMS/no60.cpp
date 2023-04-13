#include <iostream>
using namespace std;
class base1
{
protected:
    int num1;

public:
    void set_num1(int a)
    {
        num1 = a;
    }
};
class base2
{
protected:
    int num2;

public:
    void set_num2(int a)
    {
        num2 = a;
    }
};
class derived : public base1, public base2
{
protected:
    int num3;

public:
    void set_num3()
    {
        num3 = num1 + num2;
    }
    void show()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "num3 = " << num3 << endl;
    }
};
int main()
{
    derived d;
    d.set_num1(4);
    d.set_num2(5);
    d.set_num3();
    d.show();
    return 0;
}