#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n, m;
long long a[1006][1006];
long long f[1006][1006];

void process(){
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            f[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1){
                f[i][j] = f[i][j - 1] + a[i][j];
            }
            else if(j == 1){
                f[i][j] = [i - 1][j] + a[i][j];
            }
            else{
                f[i][j] = min(min(f[i - 1][j], f[i][j - 1]), f[i - 1][j - 1]) + a[i][j];
            }
        }
    }

    cout << f[n][m];
    cout << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}












