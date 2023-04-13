#include<iostream>
using namespace std;
int main(){
    int num,fact=1,i=1;
    cout<<"enter number : ";
    cin>>num;
    do{
        fact=fact*i;
        i++;
    }while(i<=num);
    cout<<"factorial of the number : "<<fact;
    return 0;
}