#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, k, sum;
bool ans = 0;
vector<int> a;
void Try(int s, int tmp)
{
    if (ans)
        return;
    if (tmp == k)
    {
        ans = 1;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s == sum)
            Try(0, tmp + 1);
        else if (s < sum)
            Try(s + a[i], tmp);
        else
            return;
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
        cin >> n >> k;
        sum = 0;
        a.clear();
        a.resize(n);
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % k != 0)
            cout << 0 << endl;
        else
        {
            sum /= k;
            Try(0, 0);
            cout << ans << endl;
        }
    }
}
