#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lli long long int

int maxArea(vector<int> &height)
{
    int Area;
    int max_Area = 0;
    int len = height.size();
    for(int i = 0; i < len; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            int breadth = j - i;
            int length = min(height[i], height[j]);
            Area = breadth * length;
            max_Area = max(Area, max_Area);
        }
    }
    return max_Area;
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int max_Area = maxArea(height);
    cout << max_Area << endl;
    return 0;
}