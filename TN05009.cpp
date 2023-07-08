#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, u, v, ok = 0;
        cin >> n >> m;
        vector<int> ans;
        vector<int> check(n + 1);
        vector<int> pre(n + 1, 0);
        vector<vector<int>> a(n + 1);
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for (int i = 1; i <= n; i++)
            sort(a[i].begin(), a[i].end());
        stack<int> st;
        st.push(1);
        check[1] = 1;
        while (st.size())
        {
            u = st.top();
            st.pop();
            for (auto i : a[u])
            {
                if (i == 1 && pre[u] != 1)
                {
                    ok = u;
                    break;
                }
                if (!check[i])
                {
                    pre[i] = u;
                    check[i] = 1;
                    st.push(u);
                    st.push(i);
                    break;
                }
            }
            if (ok)
                break;
        }
        if (ok)
        {
            while (pre[ok])
            {
                ans.push_back(ok);
                ok = pre[ok];
            }
            cout << 1 << " ";
            for (int i = ans.size() - 1; i >= 0; i--)
                cout << ans[i] << " ";
            cout << 1;
        }
        else
            cout << "NO";
        cout << endl;
    }
}
