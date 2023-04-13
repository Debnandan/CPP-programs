#include <iostream>
using namespace std;
class y;
class x
{
private:
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }
    friend void sumdata(x, y);
};
class y
{
private:
    int num;

public:
    void takedata(int value1)
    {
        num = value1;
    }
    friend void sumdata(x, y);
};
void sumdata(x o1, y o2)
{
    cout << "sum of two data : " << o1.data + o2.num;
}
int main()
{
    x a1;
    a1.setdata(3);
    y b1;
    b1.takedata(5);
    sumdata(a1, b1);
    return 0;
}