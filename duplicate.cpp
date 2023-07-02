#include <bits/stdc++.h>

using namespace std;

//-------------------------Maccroos-------------------------//

#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define vpi vector<pii>

#define ll long long
#define int ll

#define forn(i, n) for (int i = 0; i < n; i++)
#define forne(n, i) for (int i = n - 1; i >= 0; i--)
#define pb push_back
#define ff first
#define ss second
#define in insert
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define Endl endl

/* -----------------------------------TEMPLATES ------------------------------- */

template <typename T> // cin >> vector<T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return in;
}

/*------------------------------------------------------ FAST INPUT/OUTPUT -------------------------------------------------- */

void IOS()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(20);
    cout.setf(ios::fixed);
}

/* ------------------------------------------ USEFUL FUNCTIONS------------------------------ */

bool isSquare(int x)
{
    int y = sqrtl(x);
    return x == y * y;
}
bool ispow2(int x) { return (x ? !(x & (x - 1)) : 0); }
int gcd(int x, int y) { return (x ? gcd(y % x, x) : y); }
int lcm(int x, int y) { return x / gcd(x, y) * y; }

bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (!(n % 2) or !(n % 3))
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (!(n % i) or !(n % (i + 2)))
            return false;
    return true;
}

map<int, int> mapping(int a[], int n)
{
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    return mp;
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
}

int nextPerfectSquareDiff(int N)
{
    int x = sqrt(N);
    if ((x * x) == N)
    {
        return 0;
    }
    else
    {
        int nextN = floor(sqrt(N)) + 1;

        return nextN * nextN - N;
    }
}

/*------------------------------------------------------ SOLUTION TO THE PROBLEM -------------------------------------------------- */

vector<int> fillPrefixSum(string s, int n)
{
    vector<int> prefixSum(n, 0);

    if (s[0] == '1')
        prefixSum[0] = 1;

    else if (s[0] == '0')
        prefixSum[0] = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
            prefixSum[i] = prefixSum[i - 1] + 1;

        else
            prefixSum[i] = prefixSum[i - 1];
    }
    return prefixSum;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    string tp = s;

    if (m % 2 == 0)
    {
        tp += s;
    }
    int p = tp.length();
    vi psum = fillPrefixSum(tp, p);

    int count = 0;
    int sum = 0;
    sum = psum[p - 1];

    if (sum == 0)
    {
        cout << n * m << endl;
        return;
    }

    if (sum == p)
    {
        if ((p) % 2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }

        return;
    }

    for (int i = 0; i < p; i++)
    {
        if (psum[i] == (sum / 2))
        {
            count++;
        }
    }

    cout << count << endl;
}

int32_t main()
{
    IOS();
    int ttc = 1;
    cin >> ttc;
    while (ttc--)
        solve();
    return 0;
}