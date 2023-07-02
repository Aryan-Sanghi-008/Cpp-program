#include <bits/stdc++.h>
using namespace std;
//brute force

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];

//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int ans = 0;
//     int len = 0;
//     for(int i = 0; i < n; i++)
//     {
//         int min_height = INT_MAX;
//         for(int j = i; j < n; j++)
//         {
//             min_height = min(a[j] , min_height);
//             len = j - i + 1;

//             ans = max(ans , len * min_height);
//         }
//     }

//     cout << ans << endl;


//     return 0;
// }


// optimal approach

int get_max_area (vector<int> a)
{
    int n = a.size();
    int ans = 0; 
    int i = 0;

    a.push_back(0);
    stack<int> st;
    while(i < n)
    {
        while(!st.empty() && a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t];
            st.pop();

            if(st.empty())
            {
                ans = max(ans, h * i);
            }

            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, len * h);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}


int main()
{
    int arr[6] = {2,1,6,5,2,3};
    vector<int> a;
    for(int i = 0; i < 6; i++)
    {
        a.push_back(arr[i]);
    }
    cout << get_max_area(a) << endl;
    
    return 0;
}