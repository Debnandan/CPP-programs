#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter number :";
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(num==sum){
        cout<<"given number is perfect number"<<endl;
    }
    else{
        cout<<"given number is not perfect number"<<endl;
    }
    cout<<"sum "<<sum;
    return 0;
}    