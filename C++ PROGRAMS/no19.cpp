#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b;
    int** c;
    b=&a;
    c=&b;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c;
    return 0;
}