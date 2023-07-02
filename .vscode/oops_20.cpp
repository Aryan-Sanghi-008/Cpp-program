#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll number of the student is : " << roll_number << endl;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "Marks obtained in mathematics out of 100 are : " << maths << endl;
    cout << "Marks obtained in physics out of 100 are : " << physics << endl;
}

class result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is : " << (maths + physics) / 2 << "%" << endl;
    }
};
/*
Notes :
    1. A is the base class of B and B is base class of C.
    2. The inheritance path is A---->B---->C.
*/
int main()
{
    result Aryan;

    Aryan.set_roll_number(1);
    Aryan.set_marks(99, 98);
    Aryan.display_result();
    return 0;
}