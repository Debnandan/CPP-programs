#include<iostream>
using namespace std;
int main(){
    int num,fact=1,i=1;
    cout<<"enter number : ";
    cin>>num;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    cout<<"factorial of the number : "<<fact;
    return 0;
}