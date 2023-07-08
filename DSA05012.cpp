#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int a[M];
int n, k;


void process()
{
    cin >> n >> k;

    int c[n + 6][k + 6];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= k; j++){
            c[i][j] = 0;
        }
    }

    c[0][0] = 1;
    for(int i = 1; i <= n; i++){
        c[i][0] = 1;
        for(int j = 1; j <= k; j++){
            if(j <= i){
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
            }
        }
    }
    cout << c[n][k];
    cout << "\n";
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
