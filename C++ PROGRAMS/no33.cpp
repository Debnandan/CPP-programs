#include<iostream>
using namespace std;
int sum(int a,int b){
    int c = a + b; 
    return c;
}
int main(){
    int num1,num2;
    cout<<"enter first number and second number"<<endl;
    cin>>num1>>num2;
    cout<<"sum of two numbers is : "<<sum(num1,num2);
    return 0;
}