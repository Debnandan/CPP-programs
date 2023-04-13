#include <iostream>
using namespace std;
class shop_item
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "item id : " << id << endl;
        cout << "item price : " << price << endl;
    }
};
int main()
{
    int size = 3;
    shop_item *ptr = new shop_item[size];
    shop_item *ptrtemp = ptr;
    int q;
    float p;
    for (int i = 0; i < size; i++)
    {
        cout << "enter id and price of the item " << i + 1 << " :- " << endl;
        cin >> q >> p;
        ptr->setdata(q, p);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}