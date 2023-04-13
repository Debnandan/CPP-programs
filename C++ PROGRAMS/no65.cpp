#include <iostream>
using namespace std;
class sample
{
    int a;
    int b;

public:
    sample(int i, int j) : a(i), b(a + j)
    {
        cout << "a = " << a << endl;
        cout << "a+b = " << b << endl;
    }
};
int main()
{
    sample s(4, 5);
    return 0;
}