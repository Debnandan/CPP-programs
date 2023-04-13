#include<iostream>
using namespace std;
int main(){
    int a[10],b[10];
    cout<<"enter 10 numbers";
    for(int i=0;i<=9;i++){
        cin>>a[i];
    }
    b[10]=a[10];
    for(int j=0;j<=9;j++){
        cout<<b[j];
        return 0; 
    }
}