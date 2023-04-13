#include<iostream>
using namespace std;
int main(){
    int a=3,b=5,temp;
    int *c=&a,*d=&b;
    temp=*c;
    *c=*d;
    *d=temp;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b;
    return 0;
}