#include <iostream>
using namespace std;
template <class t>
class data
{
    t data1;

public:
    data(t x)
    {
        data1 = x;
    }
    void display();
};
template <class t>
void data<t>::display()
{
    cout << data1 << endl;
}
int main()
{
    data<float> d(2.1);
    d.display();
    return 0;
}