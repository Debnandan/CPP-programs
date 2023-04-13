#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any character"<<endl;
    cin>>c;
    if(c>='a'&& c<='z'){
        cout<<"it is in lower case";
    }
    else if(c>='A'&&c<='z'){
        cout<<"it is in upper case";
    }
    else{
        cout<<"not a character";
    }
    return 0;
}