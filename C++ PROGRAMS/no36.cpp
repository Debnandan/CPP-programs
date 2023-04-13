#include<iostream>
using namespace std;
int fib(int num){
    if(num<2){
        return 1;
    }
    return fib(num-1)+fib(num-2);
}
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;
    cout<<num<<" term of fibonacci series is : "<<fib(num);
    return 0;
}