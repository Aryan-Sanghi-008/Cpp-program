#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;
    public :
        // A& setdata(int a)
        void setdata(int a)
        {
            this->a = a;
            // return *this;
        }
        void getdata()
        {
            cout << "The value of a is : " << a << endl;
        }
};

int main ()
{
    //this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    // a.setdata(4).getdata();
    a.setdata(4);
    a.getdata();

    return 0;
}