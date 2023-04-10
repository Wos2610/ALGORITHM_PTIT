#include <bits/stdc++.h>
using namespace std;
int n;
int a[50];
void in(int n)
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    for (int i = n; i >= 1; i--)
        cout << a[i];
    cout << ' ';
}
void Try(int x, int n)
{
    for (int j = 0; j <= 1; j++)
    {
        a[x] = j;
        if (x == n)
            in(n);
        else
            Try(x + 1, n);
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        Try(1, i);
    }
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
