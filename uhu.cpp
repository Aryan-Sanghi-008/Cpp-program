#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll pw[31];
    pw[0] = 1;
    pw[1] = 2;
    for (ll i = 2; i < 30; i++)
    {
        pw[i] = pw[i - 1] * 2;
    }

    ll t;
    cin >> t;
    while (t--)
    {

        ll n, a, b, ans = 0;
        cin >> n >> a >> b;

        ll bNum1[n];
        ll bNum2[n];

        for (int i = 0; i < n; i++)
        {
            bNum1[i] = 0;
            bNum2[i] = 0;
        }

        ll i = 0;
        while (a > 0)
        {
            bNum1[i] = a % 2;
            a = a / 2;
            i++;
        }

        ll j = 0;
        while (b > 0)
        {
            bNum2[j] = b % 2;
            b = b / 2;
            j++;
        }

        reverse(bNum1, bNum1 + n);
        reverse(bNum2, bNum2 + n);

        vector<ll> v;
        ll first = 1;

        for (ll k = 0; k < n; k++)
        {
            if (bNum1[k] == 1 && bNum2[k] == 1)
            {
                v.push_back(0);
            }
            else if (bNum1[k] == 0 && bNum2[k] == 0)
            {
                v.push_back(1);
            }
            else
            {
                if (first == 1)
                {
                    v.push_back(bNum1[k]);
                    first++;
                }
                else
                {
                    v.push_back(bNum2[k]);
                }
            }
        }

        reverse(v.begin(), v.end());
        for (ll q = (n - 1); q >= 0; q--)
        {
            ans = ans + (v[q] * pw[q]);
        }
        cout << ans << endl;
    }
}