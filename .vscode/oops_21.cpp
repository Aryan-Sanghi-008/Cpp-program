/*
syntax for multiple inheritance
class derived : visibility - mode base class 1, visibility - mode base class 2
{
    Class body()
};
*/
#include <bits/stdc++.h>
using namespace std;
class base1
{
    protected :
        int base1int;
    public :
        void set_base1int(int a) 
        {
            base1int = a;
        }
};

class base2
{
    protected :
        int base2int;
    public :
        void set_base2int(int a) 
        {
            base2int = a;
        }
};

class derived : public base1, public base2
{
    public :
        void base_show()
        {
            cout << "The value of base1 is : " << base1int << endl;
            cout << "The value of base2 is : " << base2int << endl;
            cout << "The sum of these values is : " << base1int + base2int << endl;
        }
};
int main()
{
    derived Aryan;
    Aryan.set_base1int(20);
    Aryan.set_base2int(30);
    Aryan.base_show();
    return 0;
}