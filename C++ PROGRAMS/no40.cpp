#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string student_name;
    string father_name;
    string mother_name;

public:
    string sub1;
    string sub2;
    string sub3;
    string sub4;
    string sub5;
    void takedata(void);
    void givedata()
    {
        cout << endl;
        cout << "name of the student :SHRI. " << student_name << endl;
        cout << "name of the student's father :SHRI. " << father_name << endl;
        cout << "name of the student's mother :MRS. " << mother_name << endl;
        cout << "subject 1 : " << sub1 << endl;
        cout << "subject 2 : " << sub2 << endl;
        cout << "subject 3 : " << sub3 << endl;
        cout << "subject 4 : " << sub4 << endl;
        cout << "subject 5 : " << sub5 << endl;
    }
};
void student ::takedata(void)
{
    cout << "enter name of the student :SHRI. ";
    cin >> student_name;
    cout << "enter name of the student's father :SHRI. ";
    cin >> father_name;
    cout << "enter name of the student's mother :MRS. ";
    cin >> mother_name;
}
int main()
{
    student s1;
    s1.takedata();
    s1.sub1 = "phy";
    s1.sub2 = "che";
    s1.sub3 = "math";
    s1.sub4 = "eng";
    s1.sub5 = "comp";
    student s2;
    s2.takedata();
    s2.sub1 = "phy";
    s2.sub2 = "che";
    s2.sub3 = "math";
    s2.sub4 = "eng";
    s2.sub5 = "comp";
    s1.givedata();
    s2.givedata();
    return 0;
}