#include <bits/stdc++.h>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int data;

public:
    void setvalue(int num)
    {
        data = num;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Summing of the datum gives me : " << o1.data + o2.data << endl;
}
int main()
{
    X a1;
    Y b1;
    a1.setvalue(5);
    b1.setvalue(15);
    add(a1, b1);
    return 0;
}