#include<iostream>
using namespace std;
class y;
class x{
    int data1;
    friend void exchange(x &,y &);
    public:
    void setvalue(int value1){
        data1=value1;
    }
    void displayvalue(void){
        cout<<data1<<endl;
    }
};
class y{
    int data2;
    public:
    void setvalue(int value2){
        data2=value2;
    }
    void displayvalue(void){
        cout<<data2<<endl;
    }
    friend void exchange(x &,y &);
};
void exchange(x &c1,y &c2){
    int temp = c1.data1;
    c1.data1=c2.data2;
    c2.data2=temp;
}
int main(){
    x a;
    a.setvalue(3);
    y b;
    b.setvalue(5);
    exchange(a,b);
    cout<<"value of a after exchange : ";
    a.displayvalue();
    cout<<"value of b after exchange : ";
    b.displayvalue();
    return 0;
}