#include <iostream>
using namespace std;
template <class t1, class t2>
class data
{
    t1 data1;
    t2 data2;

public:
    data(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "data 1 : " << data1 << endl;
        cout << "data 2 : " << data2 << endl;
    }
};
int main()
{
    data<int, char> d(1, 'b');
    d.display();
    return 0;
}