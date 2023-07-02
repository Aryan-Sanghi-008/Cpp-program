#include <iostream>
using namespace std;
int recFact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int prevFact = recFact(n - 1);
        return n * prevFact;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << recFact(n) << endl;
    return 0;
}