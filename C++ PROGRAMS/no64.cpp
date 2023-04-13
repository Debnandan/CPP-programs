#include <iostream>
using namespace std;
class base1
{
    int num1;

public:
    base1(int x)
    {
        num1 = x;
        cout << "base1 constructor called " << endl;
    }
    void display_num1()
    {
        cout << "first given number  : " << num1 << endl;
    }
};
class base2
{
    int num2;

public:
    base2(int x)
    {
        num2 = x;
        cout << "base2 constructor called " << endl;
    }
    void display_num2()
    {
        cout << "second given number : " << num2 << endl;
    }
};
class derived : public base1, public base2
{
    int num3, num4;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        num3 = c;
        num4 = d;
        cout << "derived constructor called " << endl;
    }
    void display_derived()
    {
        cout << "third given number : " << num3 << endl;
        cout << "fourth given number : " << num4 << endl;
    }
    void display_all()
    {
        display_num1();
        display_num2();
        display_derived();
    }
};
int main()
{
    int p, q, r, s;
    cout << "enter any 4 numbers :- " << endl;
    cin >> p >> q >> r >> s;
    derived d(p, q, r, s);
    d.display_all();
    return 0;
}