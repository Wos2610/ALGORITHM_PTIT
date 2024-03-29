#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, ans = 0;
    cin >> n >> k;
    vector<string> s(n + 1);
    vector<vector<int>> f(n + 1, vector<int>(30, 0));
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        f[i] = f[i - 1];
        f[i][s[i].size()]++;
    }
    for (int i = 1; i <= n; i++)
        ans += f[i - 1][s[i].size()] - f[max(i - k - 1, 0)][s[i].size()];
    cout << ans;
}
