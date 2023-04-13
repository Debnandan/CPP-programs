#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
        a = 2;
        b = 3;
    }
    complex(int x)
    {
        a = x;
        b = 5;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1;
    complex c2(4);
    complex c3 = complex(6, 7);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}