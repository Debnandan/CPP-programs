#include<iostream>
using namespace std;
int main(){
    int num,rev=0;
    cout<<"enter numbers : ";
    cin>>num;
    while(num>0){
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    cout<<"reverse of the number : "<<rev;
    return 0;
}