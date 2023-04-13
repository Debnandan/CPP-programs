#include <iostream>
using namespace std;
class cwh
{
protected:
    string name;
    float ratings;

public:
    cwh(string n, float r)
    {
        name = n;
        ratings = r;
    }
    virtual void display() {}
};
class length : public cwh
{
protected:
    float video_length;

public:
    length(string n, float r, float vl) : cwh(n, r)
    {
        video_length = vl;
    }
    void display()
    {
        cout << "name of the video : " << name << endl;
        cout << "ratings of the video : " << ratings << " out of 5" << endl;
        cout << "length of the video : " << video_length << " min" << endl;
    }
};
class words : public cwh
{
protected:
    int video_words;

public:
    words(string n, float r, int w) : cwh(n, r)
    {
        video_words = w;
    }
    void display()
    {
        cout << "name of the video : " << name << endl;
        cout << "ratings of the video : " << ratings << " out of 5" << endl;
        cout << "words of the video : " << video_words << " words" << endl;
    }
};
int main()
{
    length len("pointers", 4.77, 15.40);
    words w("array", 4.88, 420);
    cwh *ptr[2];
    ptr[0] = &len;
    ptr[1] = &w;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}