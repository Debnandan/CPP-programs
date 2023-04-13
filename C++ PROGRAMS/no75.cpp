#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("no75file.txt");
    out << "hello\n";
    out << "i am \n";
    out << "debnandan";
    out.close();
    ifstream in;
    string a;
    in.open("no75file.txt");
    while (in.eof() == 0)
    {
        getline(in, a);
        cout << a << endl;
    }
    return 0;
}