#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int a[M], c[M];
int n, v;
int f[1006][1006];


void process()
{
    cin >> n >> v;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        cin >> c[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= v; j++){
            f[i][j] = 0;
        }
    }

    // f[i][j] : Gia tri lon nhat cua i do vat trong tui co the tich toi da la j
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= v; j++){
            if(j - a[i] >= 0){
                f[i][j] = max(f[i - 1][j - a[i]] + c[i], f[i - 1][j]);
            }
            else{
                f[i][j] = f[i - 1][j];
            }
        }
    }

    cout << f[n][v] << "\n";

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
