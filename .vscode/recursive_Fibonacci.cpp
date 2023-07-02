#include <iostream>
using namespace std;
int recFibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return recFibo(n - 1) + recFibo(n - 2);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << recFibo(n) << endl;
    return 0;
}