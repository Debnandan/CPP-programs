#include <iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "real part : " << real << endl;
        cout << "imaginary part : " << imaginary << endl;
    }
};
int main()
{
    complex *ptr = new complex;
    ptr->setdata(10, 20);
    ptr->getdata();
    return 0;
}