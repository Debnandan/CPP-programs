#include <iostream>
using namespace std;
int volume(int r, int h)
{
    return (3.14 * r * r * h); // vol of cylinder
}
int volume(int a)
{
    return (a * a * a); // vol of cube
}
int volume(int l, int b, int h)
{
    return (l * b * h); // vol of cuboid
}
int main()
{
    cout << "volume of cylinder : " << volume(5, 6) << endl;
    cout << "volume of cube : " << volume(5) << endl;
    cout << "volume of cuboid : " << volume(5, 6, 7);
    return 0;
}