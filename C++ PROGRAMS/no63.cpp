#include <iostream>
using namespace std;
class student
{
protected:
    int student_roll_no;

public:
    void set_rollno(int num)
    {
        student_roll_no = num;
    }
    void display_rollno()
    {
        cout << "roll number of the student : " << student_roll_no << endl;
    }
};
class test : public virtual student
{
protected:
    float physics;
    float chemistry;
    float maths;

public:
    void set_test_marks(float m1, float m2, float m3)
    {
        physics = m1;
        chemistry = m2;
        maths = m3;
    }
    void display_test_marks()
    {
        cout << "physics marks : " << physics << endl;
        cout << "chemictry marks : " << chemistry << endl;
        cout << "maths marks : " << maths << endl;
    }
};
class sports : public virtual student
{
protected:
    int physical;
    int mental;

public:
    void set_sports(int p, int h)
    {
        physical = p;
        mental = h;
    }
    void display_sports()
    {
        cout << "physical report : " << physical << endl;
        cout << "mental report : " << mental << endl;
    }
};
class result : public test, public sports
{
public:
    void display_result()
    {
        display_rollno();
        display_test_marks();
        display_sports();
    }
};
int main()
{
    result debu;
    debu.set_rollno(21);
    debu.set_test_marks(93.5, 94.6, 98.7);
    debu.set_sports(85, 100);
    debu.display_result();
    return 0;
}