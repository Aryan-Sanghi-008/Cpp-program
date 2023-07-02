#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ff first
#define ss second
#define pii vector<pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define vii vector<ll>
#define arr_sort(n) sort(arr, arr + n)
#define d_arr_sort(n) sort(arr, arr + n, greater<int>())
#define prior priority_queue<long long>
#define mod 1000000007

class priority
{
    public :
    ll arrival_time;
    ll burst_time;
    ll prior_time;
};

using namespace std;

void solution()
{
    ll n;
    priority obs[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Arrival time of " << i + 1 << "th process :";
        cin >> obs[i].arrival_time;
        cout << "Burst time of " << i + 1 << "th process :";
        cin >> obs[i].burst_time;
        cout << "Priority of " << i + 1 << "th process :";
        cin >> obs[i].prior_time;
    }
    for(int i = 0; i < n; i++)
    {
        cout << "Arrival time of " << i + 1 << "th process :";
        cout << obs[i].arrival_time;
        cout << "Burst time of " << i + 1 << "th process :";
        cout << obs[i].burst_time;
        cout << "Priority of " << i + 1 << "th process :";
        cout << obs[i].prior_time;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll tt = 1;
    // cin >> tt;
    while(tt--)
    {
        solution();
    }

    return 0;
}