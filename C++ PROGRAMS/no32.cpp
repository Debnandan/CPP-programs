#include<iostream>
#include<string.h>
using namespace std;
struct emp{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct emp e1;
    e1.id=01;
    strcpy(e1.name,"debnandan");
    e1.salary = 1000000;
    cout<<"id = "<<e1.id<<endl;
    cout<<"name = "<<e1.name<<endl;
    cout<<"salary = "<<e1.salary;
    return 0;
}