#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m, s;
int a[501][501];
int gx[] = {1, 1, 0, 0, -1, -1, 1, -1};
int gy[] = {1, -1, 1, -1, -1, 1, 0, 0};
void BFS(int x, int y)
{
    pair<int, int> k;
    queue<pair<int, int>> q;
    q.push({x, y});
    a[x][y] = 0;
    while (q.size())
    {
        k = q.front();
        q.pop();
        x = k.first;
        y = k.second;
        for (int i = 0; i < 8; i++)
        {
            x += gx[i];
            y += gy[i];
            if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y])
            {
                a[x][y] = 0;
                q.push({x, y});
            }
            x -= gx[i];
            y -= gy[i];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        s = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] == 1)
                {
                    s++;
                    BFS(i, j);
                }
            }
        }
        cout << s << endl;
    }
}
