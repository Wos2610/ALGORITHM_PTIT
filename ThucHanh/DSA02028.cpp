#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, k, d;
int a[15];
int solve(int u, int t)
{
    if (t > k)
        return 0;
    if (u == n + 1)
    {
        if (t == k)
            return 1;
        return 0;
    }
    int sum = 0, ans = 0;
    for (int i = u; i <= n; i++)
    {
        sum += a[i];
        if (sum == d)
            ans += solve(i + 1, t + 1);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        d += a[i];
    if (d % k != 0)
        cout << 0;
    else
    {
        d /= k;
        cout << solve(1, 0);
    }
}
