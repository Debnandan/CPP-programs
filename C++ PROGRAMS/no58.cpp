#include <iostream>
using namespace std;
class data
{
    int data1;

public:
    int data2;
    void setdata();
    int putdata1();
};
void data ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int data::putdata1()
{
    return data1;
}
class derived : public data
{
    int data3;

public:
    void setdata3();
    void display();
};
void derived::setdata3()
{
    data3 = putdata1() * data2;
}
void derived ::display()
{
    cout << "value of data 1 : " << putdata1() << endl;
    cout << "value of data 2 : " << data2 << endl;
    cout << "value of data 3 : " << data3 << endl;
}
int main()
{
    derived der;
    der.setdata();
    der.setdata3();
    der.display();
    return 0;
}
