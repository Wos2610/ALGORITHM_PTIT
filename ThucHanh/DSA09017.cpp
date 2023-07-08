#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int check[1001], ok;
vector<vector<int>> a(1001);
void dfs(int u)
{
    for (auto v : a[u])
    {
        if (check[v])
        {
            ok = 1;
            return;
        }
        check[v]++;
        dfs(v);
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
        ok = 0;
        int n, u, v;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            a[i].clear();
            check[i] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            cin >> u >> v;
            a[u].push_back(v);
        }
        for (int i = 1; i <= n; i++)
        {
            if (!check[i] && !ok)
            {
                check[i]++;
                dfs(i);
            }
        }
        if (!ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
