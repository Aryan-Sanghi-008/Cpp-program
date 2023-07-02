class Solution
{
public:
    bool isValid(int x, int y, int n, int m)
    {
        return x >= 0 && y >= 0 && x <= n && y <= n;
    }
    bool isPossible(int n, int m, int idx, vector<vector<int>> &cells)
    {
        vector<vector<int>> grid(n + 1, vector<int>(m + 1, 0));
        vector<pair<int, int>> dir{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        for (int i = 0; i < idx; i++)
        {
            grid[cells[i][0]][cells[i][1]] = 1;
        }

        queue<pair<int, int>> q;
        for (int i = 1; i <= m; i++)
        {
            if (grid[1][i] == 0)
            {
                q.push({1, i});
                grid[1][i] = 1;
            }
        }

        while (!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            int r = p.first, c = p.second;
            for (auto it : dir)
            {
                int x = r + it.first, y = c + it.second;
                if (isValid(x, y, n, m) && grid[x][y] == 0)
                {
                    grid[x][y] = 1;
                    if (x == n)
                    {
                        return 1;
                    }
                    q.push({x, y});
                }
            }
        }
        return 0;
    }

    int latestDayToCross(int row, int col, vector<vector<int>> &cells)
    {
        int left = 0, right = row * col, ans = 0;
        while (left <= right)
        {
            int mid = (left + right) >> 1;
            if (isPossible(row, col, mid, cells))
            {
                left = mid;
                ans = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};