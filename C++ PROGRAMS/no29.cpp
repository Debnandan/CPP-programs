#include<iostream>
using namespace std;
int main(){
    int num,rev=0,num1;
    cout<<"enter numbers : ";
    cin>>num;
    num1=num;
    while(num>0){
        rev=(rev*10)+(num%10);
        num=num/10;
    }   
    if(num1==rev){
        cout<<"given number is palindrome "<<rev;
    }
    else{
        cout<<"given number is not palindrome its reverse is "<<rev;
    }
    return 0;
}