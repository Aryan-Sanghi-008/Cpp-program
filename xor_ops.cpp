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
#include <unordered_map>
#include <queue>
#include <algorithm>
#include <sstream>
#include <stack>
#include <iomanip>
#include <climits>
#include <assert.h>

//-----macros-----//

#define ll long long
#define ull unsigned long long
#define ld long double
#define vii vector<ll>
#define pii pair<ll, ll>
#define vvi vector<vector<ll> >
#define vpi vector<pair<ll, ll> >
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

using namespace std;

// -------- functions of c++ (not STL of course) -------- //

ll binarySearch(vector<ll> v, ll key)
{
    ll low = 0;
    ll high = v.size() - 1;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;

        if (v[mid] == key)
        {
            return mid;
        }

        if (v[mid] < key)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

bool isPrime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (ll i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

bool isPowerOf2(ll num)
{
    while(num > 1)
    {
        if(num % 2)
        {
            return false;
        }
    }
    return true;
}
vector<bool> to_binary(ll num, ll n)
{
    vector<bool> ans;
    for (ll i = 0; i < n; i++)
    {
        ans.pb(num % 2);
        num /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

ll to_decimal(vector<bool> binary)
{
    ll ans = 0;
    reverse(binary.begin(), binary.end());
    ll n = sz(binary);
    for (ll i = 0; i < n; i++)
        ans += (binary[i] ? pow(2, i) : 0);
    return ans;
}

vector<ll> countFreq(vector<ll> v, ll n)
{
    vector<ll> count(n, false);
    for (ll i = 0; i < n; i++)
    {
        count[v[i]]++;
    }
    return count;
}

vector<bool> ifVisited(vector<ll> v, ll n)
{
    vector<bool> visited(n, false);

    for (ll i = 0; i < n; i++)
    {
        if (visited[v[i]] == true)
        {
            continue;
        }
        else
        {
            visited[v[i]] = true;
        }
    }
    return visited;
}

vector<ll> suffix_min(vector<ll> v, ll n)
{
    vector<ll> suffix_mini(n, 0);
    suffix_mini[n - 1]  = v[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        suffix_mini[i] = min(suffix_mini[i + 1], v[i]);
    }
    return suffix_mini;
}

vector<ll> suffix_max(vector<ll> v, ll n)
{
    vector<ll> suffix_maxi(n, 0);
    suffix_maxi[n - 1]  = v[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        suffix_maxi[i] = max(suffix_maxi[i + 1], v[i]);
    }
    return suffix_maxi;
}

vector<ll> prefix_min(vector<ll> v, ll n)
{
    vector<ll> prefix_mini(n, 0);
    prefix_mini[0]  = v[0];
    for(int i = 1; i < n; i++)
    {
        prefix_mini[i] = min(prefix_mini[i - 1], v[i]);
    }
    return prefix_mini;
}

vector<ll> prefix_max(vector<ll> v, ll n)
{
    vector<ll> prefix_maxi(n, 0);
    prefix_maxi[0]  = v[0];
    for(int i = 1; i < n; i++)
    {
        prefix_maxi[i] = max(prefix_maxi[i - 1], v[i]);
    }
    return prefix_maxi;
}
unordered_map<ll,ll> freqByMap(vector<ll> v, ll size)
{
    unordered_map<ll, ll> freqMap;

    for (ll i = 0; i < size; i++)
    {
        freqMap[v[i]]++;
    }

    return freqMap;
}

bool isVowel(char a)
{
    return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
}

// -------- solution from here -------- //

void solution()
{   
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solution();
    }
    return 0;
}