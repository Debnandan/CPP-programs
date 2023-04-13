#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"a1";
    }
    else if (marks>=80)
    {
        cout<<"a2";
    }
    else if (marks>=60)
    {
        cout<<"b";
    }
    else
    {
        cout<<"better luck next time";
    } 
    return 0;  
}