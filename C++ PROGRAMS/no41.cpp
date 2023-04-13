#include <iostream>
using namespace std;

class shop
{
private:
    int item_id[20];
    int item_price[20];
    int counter;

public:
    void count(void)
    {
        counter = 0;
    }
    void setdata(void);
    void displaydata(void);
};
void shop ::setdata(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "Enter Price of your item" << endl;
    cin >> item_price[counter];
    counter++;
}
void shop ::displaydata(void)
{
    cout << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "item number " << i + 1 << " id : " << item_id[i] << endl;
        cout << "price : " << item_price[i] << endl;
        cout << endl;
    }
}
int main()
{
    int num;
    cout << "enter total number of items : ";
    cin >> num;
    shop dukaan;
    dukaan.count();
    for (int i = 0; i < num; i++)
    {
        dukaan.setdata();
    }
    dukaan.displaydata();
    return 0;
}