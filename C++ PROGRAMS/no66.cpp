#include <iostream>
using namespace std;
int main()
{
    int *p = new int(1);
    cout << *p << endl;
    int *p1 = new int[3];
    p1[0] = 2;
    p1[1] = 3;
    p1[2] = 4;
    cout << p1[0] << endl;
    cout << p1[1] << endl;
    cout << p1[2] << endl;
    int *p2 = new int(2);
    delete p2;
    return 0;
}