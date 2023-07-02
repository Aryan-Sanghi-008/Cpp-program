#include <bits/stdc++.h>
using namespace std;
// default arguement constructor
class Simple
{
    int data1, data2, data3;

    public:
        Simple(int a, int b, int c = 7)
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void print_data();
};
void Simple ::print_data()
{
    cout << "The values of datum are : " << data1 << ", " << data2 << " and " << data3 << endl;
}
int main()
{
    Simple s1(5,6);
    s1.print_data();
    return 0;
}