#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int a[M], c[M], mark[M];
int n, v;
int f[M];
vector<int> save;

void sieve()
{
    mark[0] = mark[1] = 1;

    for(int i = 2; i * i <= M; i++)
    {
        if(!mark[i])
        {
            for(int j = i * i; j <= M; j += i)
            {
                mark[j] = 1;
            }
        }
    }

    for(int i = 2; i <= M; i++)
    {
        if(!mark[i])
        {
            save.push_back(i);
        }
    }
}

void process()
{
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = a[i];
    }

    f[1] = a[1];
    for (int i = 2; i <= n; i++) {
        f[i] = max(f[i - 2] + a[i], f[i - 1]);
    }

    cout << f[n] << endl;
    cout << "\n";
}

int main()
{
    int T = 1;
    cin >> T;
    sieve();
    while (T--)
    {
        process();
    }
}
