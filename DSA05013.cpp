#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n, k;
long long f[M]; // so cach buoc den bac thu i
void process()
{
    cin >> n >> k;
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= k; i++){
        f[i] = (f[i - 1] * 2) % MOD;
        //cout << f[i] << " ";
    }
    for(int i = k + 1; i <= n; i++){
        f[i] = 0;
    }
    for(int i = k + 1; i <= n; i++){
        for(int j = i - k; j < i; j++){
            f[i] = (f[i] + f[j]) % MOD;
        }
        //cout << f[i] << " ";
    }

    cout << f[n] << "\n";
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
