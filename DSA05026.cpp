#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int a[M];
int n, c;
int f[106][25006];


void process()
{
    cin >> c >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= c; j++){
            f[i][j] = 0;
        }
    }

    // f[i][j] : khoi luong lon nhat cua i con bo khi khoi luong toi da co the la j
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= c; j++){
            if(j - a[i] >= 0){
                f[i][j] = max(f[i - 1][j - a[i]] + a[i], f[i - 1][j]);
            }
            else{
                f[i][j] = f[i - 1][j];
            }
        }
    }

    cout << f[n][c];
}

int main()
{
    int T = 1;
    //cin >> T;
    while (T--)
    {
        process();
    }
}
