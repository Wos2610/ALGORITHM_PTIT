#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m, x, y, ok;
vector<int> check;
vector<vector<int>> a;
void DFS(int k)
{
    check[k] = 1;
    for (auto i : a[k])
    {
        if (check[i] == 0)
            DFS(i);
        else if (check[i] == 1)
            ok = 1;
    }
    check[k] = 2;
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
        ok = 0;
        a.clear();
        check.clear();
        a.resize(n + 1);
        check.resize(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        for (int i = 1; i <= n; i++)
            if (!check[i] && !ok)
                DFS(i);
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
