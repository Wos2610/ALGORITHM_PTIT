#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, s;
    cin >> n >> s;
    if (n == 1 && s < 10)
        cout << s << " " << s;
    else if (s == 0 || s > n * 9)
        cout << "-1 -1";
    else
    {
        int k = s / 9;
        int d = s - k * 9;
        if (k == n)
        {
            for (int i = 0; i < n; i++)
                cout << 9;
            cout << " ";
            for (int i = 0; i < n; i++)
                cout << 9;
        }
        else if (d == 0)
        {
            cout << 1;
            for (int i = k + 1; i < n; i++)
                cout << 0;
            cout << 8;
            for (int i = 1; i < k; i++)
                cout << 9;
            cout << " ";
            for (int i = 0; i < k; i++)
                cout << 9;
            for (int i = k; i < n; i++)
                cout << 0;
        }
        else
        {
            if (k == n - 1)
            {
                cout << d;
                for (int i = k + 1; i < n; i++)
                    cout << 0;
                for (int i = 0; i < k; i++)
                    cout << 9;
            }
            else
            {
                cout << 1;
                for (int i = k + 2; i < n; i++)
                    cout << 0;
                cout << d - 1;
                for (int i = 0; i < k; i++)
                    cout << 9;
            }
            cout << " ";
            for (int i = 0; i < k; i++)
                cout << 9;
            cout << d;
            for (int i = k + 1; i < n; i++)
                cout << 0;
        }
    }
}
