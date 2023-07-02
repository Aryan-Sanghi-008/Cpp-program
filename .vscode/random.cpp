#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        int m, n, chef;
        unsigned long long int ans = 1;
        for (int i = L + 1; i <= R; i++)
        {
            if (i <= 9)
            {
                chef = i;
                ans *= pow(L,chef);
            }
            else if (i >= 10 && i <= 99)
            {
                if (L <= 9)
                {
                    n = i/10;
                    chef = (i * 10) + n;
                    ans *= pow(L, chef);
                }
                else
                {
                    m = L/10;
                    n = i/10;
                    L = (L * 10) + m;
                    chef = (i * 10) + n;
                    ans *= pow(L,chef);
                }
            }
            else if(i >= 100 && i <= 999)
            {
                if(L <= 99)
                {
                    m = L/10;
                    n = i/10;
                    L = (L * 10) + m;
                    chef = (i * 10) + n;
                    ans *= pow(L,chef);
                }
                else
                {
                    m = L/100;
                    n = i/100;
                    L = (L * 10) + m;
                    chef = (i * 10) + n;
                    ans *= pow(L,chef);
                }
            }
            else if(i >= 1000 && i <= 9999)
            {
                if(L <= 999)
                {
                    m = L/100;
                    n = i/100;
                    L = (L * 10) + m;
                    chef = (i * 10) + n;
                    ans *= pow(L,chef);
                }
                else
                {
                    m = L/1000;
                    n = i/1000;
                    L = (L * 10) + m;
                    chef = (i * 10) + n;
                    ans *= pow(L,chef);
                }
            }
            else if(i >= 10000 && i <= 99999)
            {
                if(L <= 9999)
                {
                    m = L/1000;
                    n = i/1000;
                    L = (L * 10) + m;
                    chef = (i * 10) + n;
                    ans *= pow(L,chef);    
                }
                else
                {
                    m = L/10000;
                    n = i/10000;
                    L = (L * 10) + m;
                    chef = (i * 10) + n;
                    ans *= pow(L,chef);
                }
            }
        }
        ans = ans % 1000000007;
        cout << ans << endl;
    }
    return 0;
}