#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define pii(x) vector<pair<ll, ll>> x
#define mp make_pair
#define vii vector<ll>
#define arr_sort(n) sort(arr, arr + n)
#define d_arr_sort(n) sort(arr, arr + n, greater<int>())
#define asort(x) sort((x).begin(), (x).end())
#define dsort(x) sort((x).begin(), (x).end(), greater<int>())
#define prior_(x) priority_queue<long long> x
#define prior_(x) priority_queue<long long> x
#define mod 1000000007

using namespace std;

bool sortbysec(const pair<string, ll> &a, const pair<string, ll> &b)
{
    return (a.second < b.second);
}

void solution()
{
    ll n;
    cin >> n;
    vector<pair<string, ll> > fcfs;
    string pro;
    ll arrival;
    for (int i = 0; i < n; i++)
    {
        cout << "Input the process and arrival time : ";
        cin >> pro >> arrival;
        fcfs.pb(mp(pro, arrival));
    }

    sort(fcfs.begin(), fcfs.end(), sortbysec);


    vector<pair<string, ll> > fcfs_2;
    ll burst = 0;
    for(int i = 0; i < n; i++)
    {
        cout << "Input the burst time for " << fcfs[i].ff;
        cin >> burst;
        fcfs_2.pb(mp(fcfs[i].ff, burst));
    }

    ll seq = 0;
    vector<pair<string, ll> > waiting_time;
    vector<pair<string, ll> > turn_around_time;

    for(int i = 0; i < n; i++)
    {
        seq += fcfs_2[i].ss;
        turn_around_time.pb(mp(fcfs_2[i].ff, seq - fcfs[i].ss));
        waiting_time.pb(mp(fcfs_2[i].ff, turn_around_time[i].ss - fcfs_2[i].ss));
    }

    cout << "Waiting time in sec for every process is :" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << waiting_time[i].ff << " " << waiting_time[i].ss << endl;
    }

    cout << "Turn around time in sec for every process is :" << endl;
    
    for(int i = 0; i < n; i++)
    {
        cout << turn_around_time[i].ff << " " << turn_around_time[i].ss << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solution();
    }

    return 0;
}