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
    // DONT LEAVE THE CPU IN IDLE STATE !!!! 
    // THIS PROGRAM WONT RUN IN ABOVE CONDITION

    ll n;
    cin >> n;
    vector<pair<string, ll> > process_arrival;
    string pro;
    ll arrival;
    for (int i = 0; i < n; i++)
    {
        cout << "Input the process and arrival time : ";
        cin >> pro >> arrival;
        process_arrival.pb(mp(pro, arrival));
    }

    sort(process_arrival.begin(), process_arrival.end(), sortbysec);

    vector<pair<ll, ll> > arri_val_burst_time;
    ll burst = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Input the burst time for " << process_arrival[i].ff;
        cin >> burst;
        arri_val_burst_time.pb(mp(process_arrival[i].ss, burst));
    }

    n -= 1;
    ll k = 1;
    ll i = arri_val_burst_time[k].ff;
    ll temp = n;
    vector<pair<string, ll> > timing;
    vector<pair<string, ll> > comp_time;
    comp_time.pb(mp(process_arrival[0].ff, arri_val_burst_time[0].ss));
    ll seq = arri_val_burst_time[0].ss;
    ll sum = 0;
    ll comp = comp_time[0].ss;
    while(true)
    {
        if(n <= 0)
        {
            break;
        }
        while (i <= seq)
        {
            if(k > temp)
            {
                break;
            }
            timing.pb(mp(process_arrival[k].ff, arri_val_burst_time[k].ss));
            sum += arri_val_burst_time[k].ss;
            k += 1;
            i = arri_val_burst_time[k].ff;
            n--;
        }
        sort(timing.begin(), timing.end(), sortbysec);
        ll z = timing.size();
        for(int i = 0; i < z; i++)
        {
            comp += timing[i].ss;
            comp_time.pb(mp(timing[i].ff, comp));
        }
        timing.clear();
        seq += sum;
        sum = 0;
    }
    ll s = comp_time.size();
    vector<pair<string, ll> > turn_around_time;
    i = 0;
    while(i != s)
    {
        for(int j = 0; j < s; j++)
        {
            if(comp_time[i].ff == process_arrival[j].ff)
            {
                turn_around_time.pb(mp(comp_time[i].ff, comp_time[i].ss - process_arrival[j].ss));
                break;
            }
        }
        i++;
    }

    cout << "Turn around time : " << endl;
    for(int i = 0; i < s; i++)
    {
        cout << turn_around_time[i].ff << " " << turn_around_time[i].ss << endl;
    }

    vector<pair<string, ll> > waiting_time;
    i = 0;
    while(i != s)
    {
        for(int j = 0; j < s; j++)
        {
            if(turn_around_time[i].ff == process_arrival[j].ff)
            {
                waiting_time.pb(mp(turn_around_time[i].ff, turn_around_time[i].ss - arri_val_burst_time[j].ss));
                break;
            }
        }
        i++;
    }
    cout << "Waiting time : " << endl;
    for(int i = 0; i < s; i++)
    {
        cout << waiting_time[i].ff << " " << waiting_time[i].ss << endl;
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