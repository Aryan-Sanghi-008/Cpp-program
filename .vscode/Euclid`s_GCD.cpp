#include <iostream>
using namespace std;
int EuclidGCD(int a, int b)
{
    if (a <= b)
    {
        while (b != 0)
        {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    else
    {
        while (a != 0)
        {
            int rem = b % a;
            b = a;
            a = rem;
        }
        return b;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << EuclidGCD(a, b);
    return 0;
}