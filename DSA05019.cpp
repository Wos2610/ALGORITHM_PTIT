#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n, m;

void process(){
    cin >> n >> m;

    int a[n + 6][m + 6];
    int f[n + 6][m + 6] = {0};

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 1){
                f[i][j] = min(min(f[i - 1][j], f[i][j - 1]), f[i - 1][j - 1]) + 1;
            }
            else{
                f[i][j] = 0;
            }
        }
    }

    int res = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            res = max(res, f[i][j]);
        }
    }

    cout << res;
    cout << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}












