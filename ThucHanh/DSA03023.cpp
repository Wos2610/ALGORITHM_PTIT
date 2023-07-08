#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, ok, ans = 0;
string s;
void Try(int l, int pos, char c)
{
    for (int i = l; i < n; i++)
    {
        if (s[i] == c)
        {
            ok = 1;
            swap(s[pos], s[i]);
            ans++;
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    int dx = 0, dt = 0, dd = 0;
    for (auto i : s)
    {
        if (i == 'X')
            dx++;
        else if (i == 'T')
            dt++;
        else
            dd++;
    }
    for (int i = 0; i < dx; ++i)
    {
        if (s[i] == 'T')
            Try(dx, i, 'X');
        else if (s[i] == 'D')
        {
            ok = 0;
            Try(dx + dt, i, 'X');
            if (ok == 0)
                Try(dx, i, 'X');
        }
    }
    for (int i = dx; i < dt + dx; i++)
        if (s[i] == 'D')
            Try(dx + dt, i, 'T');
    cout << ans;
}
