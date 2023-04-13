#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write("no74file.txt");
    string name;
    cout << "enter name : ";
    cin >> name;
    write << name;
    write.close();

    ifstream read("no74file.txt");
    string a;
    getline(read, a);
    cout <<"my name is : " + a;
    read.close();
    return 0;
}