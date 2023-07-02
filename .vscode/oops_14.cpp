#include <bits/stdc++.h>
using namespace std;
// copy constructor
class Number
{
    int a;

    public:
        Number()
        {
            a = 0;
        }
        Number(int num)
        {
            a = num;
        }
        // copy constructor
        Number (Number & obj)
        {
            cout << "Copy constructor called !!!" << endl;
            a = obj.a;
        }
        //if there is no copy constructor, compiler supplies its own copy constructor
        void display()
        {
            cout << "The value of the number is : " << a << endl;
        }
};
int main()
{
    Number x,y,z(45),z3;
    z.display();
    Number z1(x); // copy constructor invoke
    z1.display();
    Number z2 = z; // copy constructor invoke
    z2.display();
    z3 = z; // copy constructor not invoke here
    return 0;
}