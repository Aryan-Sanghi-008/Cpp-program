#include <bits/stdc++.h>
using namespace std;
// constructor overloading
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void print_number()
        {
            cout << "The value of the complex number is : " << a << " + " << b << "i" << endl;
        }
};

int main()
{
    Complex c1(4, 6);
    c1.print_number();

    Complex c2(3);
    c2.print_number();

    Complex c3;
    c3.print_number();

    return 0;
}