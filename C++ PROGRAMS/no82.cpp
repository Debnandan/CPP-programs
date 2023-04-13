#include <iostream>
using namespace std;
template <class t>
void function(t x)
{
    cout << "running template function :- " << x << endl;
}
void function(int x)
{
    cout << "running int :- " << x << endl;
}
int main()
{
    function('c');
    return 0;
}