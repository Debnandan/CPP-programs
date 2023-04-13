#include<iostream>
using namespace std;
int factorial(int num){
    if(num<=1){
        return 1;
    }
    return num * factorial(num-1);
}
int main(){
    int num;
    cout<<"enter a number  : ";
    cin>>num;
    cout<<"factorial of the number is : "<<factorial(num);
    return 0;
}