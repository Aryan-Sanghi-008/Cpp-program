#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a;
    int b;

    public :
        void set_data(int v1, int v2)
        {
            a = v1;
            b = v2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);
        void print_number()
        {
            cout << "The value of the complex number is : " << a << " + " << b << "i" << endl;
        }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.set_data((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;

    c1.set_data(1, 4);
    c1.print_number();

    c2.set_data(5, 8);
    c2.print_number();

    sum = sumComplex(c1, c2);
    sum.print_number();
    return 0;
}