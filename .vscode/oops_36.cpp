#include <bits/stdc++.h>
using namespace std;
class BaseClass
{
    public :
        int var_base = 50;
        virtual void display()
        {
            cout << "Displaying base class variable var_base : " << var_base << endl;
        }
};

class Derived_class : public BaseClass
{
    public :
        int var_derived = 60;
        void display()
        {
            cout << "Displaying base class variable var_base : " << var_base << endl;
            cout << "Displaying derived class variable var_derived : " << var_derived << endl;
        }
        
};

int main ()
{
    BaseClass obj_base;
    Derived_class obj_derived;

    BaseClass *base_class_pointer;
    base_class_pointer = &obj_derived;

    // base_class_pointer->var_base = 50;
    // base_class_pointer->var_derived = 60;

    base_class_pointer->display();
    return 0;
}