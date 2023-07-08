#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int n;
long long f[1006];

void process(){
    cin >> n;
    cout << f[n] << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    long long d[106][106] = {0};

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= 9; j++){
            d[i][j] = 0;
        }
    }

    for(int i = 0; i <= 9; i++){
        d[1][i] = 1;
    }

    for(int i = 2; i <= 100; i++){
        for(int j = 1; j <= 9; j++){
            for(int k = j; k >= 1; k--){
                d[i][j] = (d[i][j] + d[i - 1][k]) % MOD;
            }
        }
    }


    for(int i = 1; i <= 100; i++){
        for(int j = 0; j <= 9; j++){
            f[i] = (f[i] + d[i][j]) % MOD;
        }
        f[i] = (f[i] + f[i - 1]) % MOD;
    }

    while(T--){
        process();
    }
}
