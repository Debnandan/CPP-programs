#include<iostream>
using namespace std;
int main(){
    int num,fact=1;
    cout<<"enter number : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"factorial of the number : "<<fact;
    return 0;
}