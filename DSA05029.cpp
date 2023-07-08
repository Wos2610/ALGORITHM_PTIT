#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;

int check(string s)
{
    int n = s.size();
    s = " " + s;

    int f[n + 6] = {0};
    if(s[1] == '0')
    {
        return 0;
    }
    else
    {
        f[0] = 1;
        f[1] = 1;
    }

    for(int i = 2; i <= n; i++)
    {
        if(s[i] == '0')
        {
            if(s[i - 1] >= '3' || s[i - 1] == '0')
            {
                return 0;
            }
            f[i] = 0;
        }
        else
        {
            f[i] = f[i - 1];
        }

        if(s[i - 1] == '1')
        {
            f[i] += f[i - 2];
        }
        else if(s[i - 1] == '2' && s[i] >= '0' && s[i] <= '6')
        {
            f[i] += f[i - 2];
        }
    }
    return f[n];
}

void process()
{
    cin >> s;
    cout << check(s) << "\n";
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        process();
    }
}
