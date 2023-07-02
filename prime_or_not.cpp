#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int i = 2;
    cin >> n;
    while (i<n)
    {
         if (n % i == 0)
            cout << "Non Prime" << endl;
        break;
        i++;
    }
    if (i == n)
    {
        cout << "Prime" << endl;
    }
    return 0;
}