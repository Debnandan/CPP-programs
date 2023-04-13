#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any number"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"given number is even";
    }
    else{
        cout<<"given number is odd";
    }
    return 0;
}