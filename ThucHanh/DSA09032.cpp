#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int a[100005], t[100005];
int find(int u)
{
    if (t[u] == u)
        return u;
    t[u] = find(t[u]);
    return t[u];
}
void merge(int u, int v)
{
    int pu = find(u);
    int pv = find(v);
    if (pu == pv)
        return;
    else
        t[pu] = pv;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            a[i] = 0;
            t[i] = i;
        }
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            merge(x, y);
        }
        for (int i = 1; i <= n; i++)
        {
            t[i] = find(t[i]);
            a[t[i]]++;
        }
        cout << *max_element(a + 1, a + n + 1) << endl;
    }
}
