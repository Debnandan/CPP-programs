#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A& set(int a)
    {
        this->a = a;
        return *this;
    }
    void get()
    {
        cout << "value of a : " << a << endl;
    }
};
int main()
{
    A a;
    a.set(3).get();
    return 0;
}