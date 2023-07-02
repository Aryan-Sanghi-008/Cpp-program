#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real, imaginary;
    public :
        void getdata()
        {
            cout << "The value of real is : " << real << endl;
            cout << "The value of imaginary is : " << imaginary << endl;
        }
        void setdata(int a, int b)
        {
            real = a;
            imaginary = b;
        }
};
int main ()
{
    // Complex c1;
    // Complex *ptr = &c1;

    Complex *ptr = new Complex;
    // -> (arrow operator)
    
    // (*ptr).setdata(1, 2); is same as

    ptr->setdata(1,2);

    // (*ptr).getdata(); is same as

    ptr->getdata();

    return 0;
}