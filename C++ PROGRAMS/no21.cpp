#include<iostream>
using namespace std;
int main(){
    int num,odd=0,even=0;
    cout<<"enter limit :";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            even = even +i;
        }
        else{
            odd = odd + i;
        }
    }
    cout<<"sum of odd numbers : "<<odd<<endl;
    cout<<"sum of even numbers : "<<even;
    return 0;
}