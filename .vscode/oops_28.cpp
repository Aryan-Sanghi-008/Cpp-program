/*
Case 1
class b : public a
{
    order of execution of constructor ---- > a() ----- > b()
}
Case 2
class c : public a, public b
{
    order of execution of constructor ---- > a() ----- > b() ---- > c()
}
Case 3
class c : public a, virtual public b
{
    order of execution of constructor ---- > b() ----- > a() ---- > c()
}
*/
#include <bits/stdc++.h>
using namespace std;
class Base1
{
    int data1;
    public :
        Base1(int i)
        {
            data1 = i;
            cout << "A base class 1 constructor is called " << endl;
        }
        void print_data_1()
        {
            cout << "The value of data is : " << data1 << endl;
        }
};
class Base2
{
    int data2;
    public :
        Base2(int i)
        {
            data2 = i;
            cout << "A base class 2 constructor is called " << endl;
        }
        void print_data_2()
        {
            cout << "The value of data is : " << data2 << endl;
        }
};
class Derived : public Base1, public Base2
{
    int derived_1,derived_2;
    public :
        Derived(int a, int b, int c, int d) : Base1(a) , Base2(b)
        {
            derived_1 = c;
            derived_2 = d;
            cout << "Derived class constructor called " << endl;
        }
        void print_data_3()
        {
            cout << "The value of derived 1 is : " << derived_1 << endl;
            cout << "The value of derived 2 is : " << derived_2 << endl;
        }
};
int main ()
{
    Derived Aryan(1, 2, 3, 4);
    Aryan.print_data_1();
    Aryan.print_data_2();
    Aryan.print_data_3();
    return 0;
}