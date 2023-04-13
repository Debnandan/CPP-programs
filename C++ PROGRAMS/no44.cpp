#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdata_by_sum(complex x1, complex x2)
    {
        a = x1.a + x2.a;
        b = x1.b + x2.b;
    }
    void print(void)
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 5);
    c1.print();
    c2.setdata(2, 4);
    c2.print();
    c3.setdata_by_sum(c1, c2);
    c3.print();
    return 0;
}