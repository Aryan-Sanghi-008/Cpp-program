/*
    Polymorphism :
    -   One name and multiple forms
    -   eg. fumction overloading, operator overloading
    -   eg. Virtual functions

    Polymorphism in c++ can be of two types
    1. Compile time polymorphism
        Compile time polymorphism in C++ is achieved using
        1.1 Function overloading
        1.2 Operator overloading
    2. Run time polymorphism
        Run time polymorphism in C++ is achieved using
        2.1 Virtual functions
*/
#include <bits/stdc++.h>
using namespace std;
class BaseClass
{
    public :
        int var_base;
        void display()
        {
            cout << "Displaying base class variable var_base : " << var_base << endl;
        }
};

class Derived_class : public BaseClass
{
    public :
        int var_derived;
        void display()
        {
            cout << "Displaying base class variable var_base : " << var_base << endl;
            cout << "Displaying derived class variable var_derived : " << var_derived << endl;
        }
        
};

int main ()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    Derived_class obj_derived;

    base_class_pointer = &obj_derived; //pointing base class pointer to derived class
    base_class_pointer->var_base = 30;
    // base_class_pointer->display(); // base class pointer access only base class functions

    //base class pointer can access only things which are in base class
    // base_class_pointer->var_derived = 30; // not valid, will throw an error
    

    Derived_class *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_derived = 90;
    derived_class_pointer->display();
    return 0;
}