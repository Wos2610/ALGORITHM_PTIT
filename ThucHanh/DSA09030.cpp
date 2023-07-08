#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m, u, v, ok;
vector<int> check;
vector<vector<int>> a;
void dfs(int u)
{
    for (auto v : a[u])
    {
        if (check[u] == check[v])
        {
            ok = 0;
            return;
        }
        else if (!check[v])
        {
            check[v] = 3 - check[u];
            dfs(v);
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
        cin >> n >> m;
        ok = 1;
        a.clear();
        a.resize(n + 1);
        check.clear();
        check.resize(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for (int i = 1; i <= n; i++)
        {
            if (!check[i])
            {
                check[i] = 1;
                dfs(i);
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
