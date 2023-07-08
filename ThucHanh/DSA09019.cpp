#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m, x, y, ok;
vector<int> svs;
vector<bool> check;
vector<vector<int>> a;
void BFS(int k)
{
    check[k] = 0;
    for (auto i : a[k])
    {
        if (check[i])
        {
            svs[i] = k;
            BFS(i);
        }
        else if (i != svs[k])
        {
            ok = 1;
            return;
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
        ok = 0;
        a.clear();
        svs.clear();
        check.clear();
        a.resize(n + 1);
        svs.resize(n + 1, -1);
        check.resize(n + 1, 1);
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
            if (check[i] && !ok)
                BFS(i);
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
