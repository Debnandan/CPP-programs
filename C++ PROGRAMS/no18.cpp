#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b;
    b=&a;
    cout<<b<<endl;
    cout<<*b;
    return 0;
}