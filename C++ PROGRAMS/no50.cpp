#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y);
    void display();
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
void complex::display()
{
    cout << a << "+" << b << "i" << endl;
}
int main()
{
    complex c(3, 4);           // implicit call
    complex d = complex(5, 6); // explicit call
    c.display();
    d.display();
    return 0;
}