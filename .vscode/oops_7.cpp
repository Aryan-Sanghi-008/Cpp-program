#include <bits/stdc++.h>
using namespace std;
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};
class Complex
{
    int a;
    int b;
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    friend class Calculator;
public:
    void set_data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print_number()
    {
        cout << "The value of the complex number is : " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
};
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
};
int main()
{
    Complex c1, c2;
    c1.set_data(1, 4);
    c2.set_data(5, 8);
    Calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real numbers is : " << res << endl;
    int resc = calc.sumCompComplex(c1, c2);
    cout << "The sum of real numbers is : " << resc << endl;
    return 0;
}