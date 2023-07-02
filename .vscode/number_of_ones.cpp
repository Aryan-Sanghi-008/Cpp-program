#include <iostream>
using namespace std;
int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int a;
    cin >> a;
    cout << numberofones(a) << endl;
    return 0;
}