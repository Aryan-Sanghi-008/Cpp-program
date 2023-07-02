#include <bits/stdc++.h>
using namespace std;
class c2;
class c1
{
    int val1;

public:
    void data(int data)
    {
        val1 = data;
    }
    void print_data()
    {
        cout << val1 << endl;
    }
    friend void swap_exchange(c1 &, c2 &);
};
class c2
{
    int val2;

public:
    void data(int data)
    {
        val2 = data;
    }
    void print_data()
    {
        cout << val2 << endl;
    }
    friend void swap_exchange(c1 &, c2 &);
};
void swap_exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.data(34);
    oc2.data(67);

    swap_exchange(oc1, oc2);

    cout << "The value of val1 after swapping is :";
    oc1.print_data();

    cout << "The value of val2 after swapping is :";
    oc2.print_data();

    return 0;
}