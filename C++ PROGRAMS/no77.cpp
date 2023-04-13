#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3); // vector 1
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.4;
    v1.arr[2] = 2.6;
    vector<float> v2(3); // vector 2
    v2.arr[0] = 2.4;
    v2.arr[1] = 3.6;
    v2.arr[2] = 4.8;
    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}
