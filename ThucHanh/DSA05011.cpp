#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long f[105][50005] = {}, mod = 1e9 + 7;
    for (int i = 1; i <= 9; i++)
        f[1][i] = 1;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 5000; j >= 0; j--)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (j >= k)
                {
                    f[i][j] += f[i - 1][j - k];
                    f[i][j] %= mod;
                }
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << f[n][k] << endl;
    }
}
