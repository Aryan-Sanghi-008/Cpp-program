#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <sstream>
#include <stack>
#include <iomanip>
#include <assert.h>
#include <climits>
using namespace std;

// -------- shorthands -------- //
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
#define repp(i, a, n) for (int i = a; i < n; i++)
#define bckk(i, n, b) for (int i = n - 1; i >= b; i--)
#define rep(i, n) repp(i, 0, n)
#define bck(i, n) bckk(i, n, 0)
#define sz(x) (x).size()
#define len(x) (x).length()
#define mod 1000000007
#define out(flag) cout << (flag ? "YES" : "NO");

// -------- useful functions -------- //
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

vector<bool> to_binary(ll num, ll n)
{
    vector<bool> ans;
    for (int i = 0; i < n; i++)
    {
        ans.pb(num % 2);
        num /= 2;
    }
    reverse(all(ans));
    return ans;
}

ll to_decimal(vector<bool> binary)
{
    ll ans = 0;
    reverse(all(binary));
    int n = sz(binary);
    for (int i = 0; i < n; i++)
        ans += (binary[i] ? pow(2, i) : 0);
    return ans;
}

// -------- solution starts here -------- //

bool cal(string x, map<string, bool> s)
{
    int n = len(x);
    vector<string> pre, suf;
    string push = "";
    for (int i = 0; i < n - 1; i++)
    {
        push += x[i];
        pre.pb(push);
    }

    push = "";
    for (int i = n - 1; i > 0; i--)
    {
        push = x[i] + push;
        suf.pb(push);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s.find(pre[i]) != s.end())
        {
            if (s.find(suf[n - i - 2]) != s.end())
            {
                return 1;
            }
        }
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    string val[n];
    map<string, bool> s;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.insert({x, 1});
        val[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        bool k = cal(val[i], s);
        cout << k;
    }
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