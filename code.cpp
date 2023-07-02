#include <bits/stdc++.h>
using namespace std;

// -------- macros -------- //
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define asort(x) sort((x).begin(), (x).end())
#define dsort(x) sort((x).rbegin(), (x).rend())
#define sz(x) (x).size()
#define len(x) (x).length()

bool custom(vector<int> p1, vector<int> p2)
{
    return sz(p1) < sz(p2);
}

void calculate(ll a[], ll n)
{
    vector<int> factors[n];
    for (int i = 0; i < n; i++)
    {
        ll num = a[i];
        if (!(num % 2))
        {
            factors[i].pb(2);
        }
        while (!(num % 2))
        {
            num /= 2;
        }
        for (int j = 3; j <= sqrt(num); j += 2)
        {
            cout << j << " " << num << endl;
            if (!(num % j))
            {
                factors[i].pb(j);
            }
            while (!(num % j))
            {
                num /= j;
            }
        }
        if (num > 2)
            factors[i].pb(num);
    }

    sort(factors, factors + n, custom);

    
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll GCD = __gcd(a[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        GCD = __gcd(GCD, a[i]);
    }
    if (GCD - 1)
    {
        cout << n;
        return;
    }
    calculate(a, n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}