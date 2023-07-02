#include <bits/stdc++.h>
#define vertex 5

using namespace std;

int Prim[vertex][vertex] = {
    {1, 2, 3, 4, 5},
    {5, 4, 3, 2, 1},
    {6, 7, 5, 8, 4},
    {9, 13, 17, 12, 11},
    {8, 6, 4, 9, 14}};

void solution()
{
    int visited[vertex];

    memset(visited, false, sizeof(visited));

    visited[0] = true;

    int x;
    int y;

    int edges = 0;
    while (edges < vertex - 1)
    {
        int min = INT_MAX;
        x = 0;
        y = 0;

        for (int i = 0; i < vertex; i++)
        {
            if (visited[i])
            {
                for (int j = 0; j < vertex; j++)
                {
                    if (!visited[j] && Prim[i][j])
                    {
                        if (Prim[i][j] < min)
                        {
                            min = Prim[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        cout << x << " -> " << y << " wait is : " << Prim[x][y] << endl;
        visited[y] = true;
        edges++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solution();
    }

    return 0;
}