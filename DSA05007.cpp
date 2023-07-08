#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n;
int a[M], f[M];

void process()
{
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        f[i] = a[i];
    }

    for(int i = 3; i <= n; i++){
        for(int j = 2; j <= 3; j++){
            f[i] = max(f[i - j] + a[i], f[i]);
        }
    }

    cout << max(f[n], f[n - 1]) << "\n";

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
