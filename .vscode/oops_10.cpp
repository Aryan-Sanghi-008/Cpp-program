#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a;
    int b;

    public:
        Complex(int, int);
        void print_number()
        {
            cout << "The value of the complex number is : " << a << " + " << b << "i" << endl;
        }
        Complex();
};
Complex ::Complex()
{
    a = 10;
    b = 20;
}
Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    Complex b;//default constructor
    Complex a(4, 6); // parameterized constructor
    a.print_number();
    b.print_number();
    return 0;
}