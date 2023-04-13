#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string a;
    ifstream in("no73read.txt");
    getline(in, a);
    cout << a;
    
    string b = "hii i am debnandan";
    ofstream out("no73write.txt");
    out << b;
    return 0;
}