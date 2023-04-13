#include <iostream>
using namespace std;
class student
{
protected:
    int student_roll_no;

public:
    void set_roll_no(int r);
    void display_roll_no();
};
void student ::set_roll_no(int r)
{
    student_roll_no = r;
}
void student ::display_roll_no()
{
    cout << "roll number of the student : " << student_roll_no << endl;
}
class exam : public student
{
protected:
    float physics;
    float maths;

public:
    void setdata(float m1, float m2);
    void display_data();
};
void exam ::setdata(float m1, float m2)
{
    physics = m1;
    maths = m2;
}
void exam ::display_data()
{
    cout << "marks of physics : " << physics << endl;
    cout << "marks of maths : " << maths << endl;
}
class result : public exam
{
protected:
    float percentage;

public:
    void set_percentage();
    void display_percentage();
    void display_result();
};
void result ::set_percentage()
{
    percentage = ((physics + maths) / 2);
}
void result ::display_percentage()
{
    cout << "the result of the student : " << percentage << endl;
}
void result ::display_result()
{
    display_roll_no();
    display_data();
    display_percentage();
}
int main()
{
    result a;
    a.set_roll_no(420);
    a.setdata(93.0, 96.0);
    a.set_percentage();
    a.display_result();
    return 0;
}