#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "hello !!!" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "hii !!!" << endl;
    }
};
class derived : public base1, public base2
{
public:
    void greet()
    {
        base2 ::greet();
    }
};
int main()
{
    base1 b;
    b.greet();
    derived d;
    d.greet();
    return 0;
}