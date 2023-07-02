#include <bits/stdc++.h>
using namespace std;
// virtual base class
/*
student --- > test
student ---- > sports
test ---- > result
sports ---- > result
*/
class student
{
protected:
    int roll_no;

public:
    void set_roll_number(int a)
    {
        roll_no = a;
    }
    void print_roll_number()
    {
        cout << "Your roll no is : " << roll_no << endl;
    }
};
class test : virtual public student
{
    protected :
        float maths, physics;
    public :
        void set_marks(float m1, float m2)
        {
            maths = m1;
            physics = m2;
        }
        void print_marks()
        {
            cout << "Your result is here :" << endl
                 << "Mathematics : " << maths << endl
                 << "Physics : " << physics << endl;
        }
};
class sports : virtual public student
{
    protected :
        float score;
    public :
        void set_score(float sc)
        {
            score = sc;
        }
        void print_score()
        {
            cout << "Your pt score is : " << score << endl;
        }
};
class result : public test, public sports
{
    private :
        float total;
    public :
        void display()
        {
            total = maths + physics + score;
            print_roll_number();
            print_marks();
            print_score();
            cout << "Your total score is : " << total << endl;
        }

};
int main()
{
    result Aryan;
    Aryan.set_roll_number(1);
    Aryan.set_marks(98, 99);
    Aryan.set_score(9);
    Aryan.display();
    
    return 0;
}