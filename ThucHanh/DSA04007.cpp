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
        int n, k, x, ok = 0;
        string s1, s2, s = "";
        cin >> k >> s1 >> s2;
        while (s1.size() < s2.size())
            s1 = '0' + s1;
        while (s2.size() < s1.size())
            s2 = '0' + s2;
        n = s1.size();
        for (int i = n - 1; i >= 0; i--)
        {
            x = s1[i] + s2[i] - 2 * '0';
            if (ok == 1)
            {
                x++;
                ok = 0;
            }
            if (x > k - 1)
            {
                ok = 1;
                x -= k;
            }
            if (x >= 10)
                s = (char)('A' + x - 10) + s;
            else
                s = to_string(x) + s;
        }
        if (ok == 1)
            s = '1' + s;
        cout << s << endl;
    }
}
