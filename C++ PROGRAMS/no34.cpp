#include<iostream>
using namespace std;
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    cout<<"enter two number"<<endl;
    cin>>x>>y;
    cout<<"before swapping"<<endl;
    cout<<"value of x : "<<x<<"\t"<<"value of y : "<<y<<endl;
    swap(x,y);
    cout<<"after swapping"<<endl;
    cout<<"value of x : "<<x<<"\t"<<"value of y : "<<y;
    return 0;
}