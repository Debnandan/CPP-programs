#include<iostream>
using namespace std;
int main(){
    int marks[4];
    for(int i=0;i<4;i++){
        cout<<"enter marks "<<i+1<<endl;
        cin>>marks[i];
    }
    for(int i=0;i<4;i++){
        cout<<"marks "<<i+1<<" is "<<marks[i]<<endl;
    }
    return 0;
}