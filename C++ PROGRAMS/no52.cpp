#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int x = 1, int y = 2, int z = 6)
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void display()
    {
        cout << "data 1 : " << data1 << ", data 2 : " << data2 << ", data 3 : " << data3;
    }
};
int main()
{
    simple s(4, 5);
    s.display();
    return 0;
}