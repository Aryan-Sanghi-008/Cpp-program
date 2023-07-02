#include<bits/stdc++.h>
using namespace std;
// 

// int main()
// {
//     deque<int> dq;
//     dq.push_back(1);
//     dq.push_back(2);

//     dq.push_front(3);
//     dq.push_front(4);

//     for(auto i: dq)
//     {
//         cout << i << " " << endl;
//     }
//     cout << endl;

//     dq.pop_back();
//     dq.pop_front();

//     for(auto i : dq)
//     {
//         cout << i << " " << endl;
//     }

//     return 0;
// }

// int main()
// {
    // int n, k;
    // cin >> n >> k;
    // vector<int> a(n);
    // for(auto &i : a)
    // {
    //     cin >> i;
    // }

    // multiset<int,greater<int>> s;
    // vector<int> ans;

    // for(int i = 0; i < k; i++)
    // {
    //     s.insert(a[i]);
    // }
    // ans.push_back(*s.begin());

    // for(int i = k; i < n; i++)
    // {
    //     s.erase(lower_bound(a[i-x]));
    //     s.insert(a[i]);
    //     ans.push_back(*(s.begin()));
    // }

    // for(auto i : ans)
    // {
    //     cout << i << " ";
    // }
    // return 0;
// }

// optimised approach
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a)
    {
        cin >> i;
    }

    deque<int> dq;
    vector<int> ans;

    for(int i = 0; i < k; i++)
    {
        while(!dq.empty() && a[dq.back()] > a[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);

    for(int i = k; i < n; i++)
    {
        if(dq.front() == i-k)
        {
            dq.pop_front();
        }

        while(!dq.empty() && a[dq.back()] > a[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);
        ans.push_back(a[dq.front()]);
    }

    for(auto i : dq)
    {
        cout << i << " ";
    }

    return 0;
}