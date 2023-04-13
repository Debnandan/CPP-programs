#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
    friend complex sum_complex(complex x1, complex x2);

public:
    void set_number(int y1, int y2)
    {
        a = y1;
        b = y2;
    }
    void print_number(void)
    {
        cout << a << "+" << b << "i" << endl;
    }
};
complex sum_complex(complex x1, complex x2)
{
    complex x3;
    x3.set_number((x1.a + x2.a), (x1.b + x2.b));
    return x3;
}
int main()
{
    complex c1, c2, sum;
    c1.set_number(3, 4);
    c1.print_number();
    c2.set_number(4, 5);
    c2.print_number();
    sum = sum_complex(c1, c2);
    sum.print_number();
    return 0;
}