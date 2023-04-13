#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"you can vote";
    }
    else{
        cout<<"not allowed to vote";
    }
    return 0;
}