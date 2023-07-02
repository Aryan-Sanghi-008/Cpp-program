#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lli long long int


int main()
{	
    int k;
    cin >> k;
    vector<vector<int> > a(k);

    for(int i = 0; i < k; i++)
    {
        int size;
        cin >> size;

        a[i] = vector<int>(size);

        for(int j = 0; j < size; j++)
        {
            cin >> a[i][j];
        }
    }


    vector<int> idx(k,0);

    priority_queue<pair<int, int> , vector<pair<int,int> > , greater<pair<int, int> > > pqmin;

    for(int i = 0; i < k; i++)
    {

        pair<int, int> p;
        p.first = a[i][0];
        p.second = i;
        pqmin.push(p);

    }

    vector<int> ans;

    while(!pqmin.empty())
    {
        pair<int , int> x = pqmin.top();
        pqmin.pop();

        ans.push_back(x.first);

        if(idx[x.second] + 1 < a[x.second].size())
        {

            pair<int, int> p;
            p.first = a[x.second][idx[x.second] + 1];
            p.second = x.second;
            pqmin.push(p);


            idx[x.second] += 1;
        }
    }

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}