#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>
class data
{
    t1 a;
    t2 b;
    t3 c;

public:
    data(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "value of a : " << a << endl;
        cout << "value of b : " << b << endl;
        cout << "value of c : " << c << endl;
    }
};
int main()
{
    cout << endl;
    data<> d(1, 2.2, 'd');
    d.display();
    cout << endl;
    data<char, int, float> e('a', 9, 6.1);
    e.display();
    return 0;
}