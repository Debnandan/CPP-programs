#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any character"<<endl;
    cin>>c;
    if((c>='a'&& c<='z')||(c>='A'&&c<='z')){
        cout<<"it is character";
    }
    else{
        cout<<"not a character";
    }
    return 0;
}