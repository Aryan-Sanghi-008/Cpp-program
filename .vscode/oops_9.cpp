#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

    public:
        Complex();
        void print_number()
        {
            cout << "The value of the complex number is : " << a << " + " << b << "i" << endl;
        }
};
Complex :: Complex()
{
    a = 2;
    b = 3;
}
int main()
{
    Complex c1, c2, c3;
    c1.print_number();
    c2.print_number();
    c3.print_number(); 
    return 0;
}