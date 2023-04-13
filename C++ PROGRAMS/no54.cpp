#include <iostream>
#include <math.h>
using namespace std;
class points
{
    int x;
    int y;

public:
    void axis(int a, int b)
    {
        x = a;
        y = b;
    }
    int distance(points p, points q)
    {
        return (pow((q.x - p.x), 2) + pow((q.y - p.y), 2));
    }
};
int main()
{
    points p1, p2, z;
    p1.axis(3, 4);
    p2.axis(7, 8);
    cout << "distance between two points : " << float(sqrt(z.distance(p1, p2)));
    return 0;
}