#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long n, k;

struct Matrix{
    long long m[16][16];
}a;

Matrix mul(Matrix a, Matrix b){
    Matrix res;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            res.m[i][j] = 0;
            for(int k = 1; k <= n; k++){
                long long temp = (a.m[i][k] * b.m[k][j]) % MOD;
                res.m[i][j] = (res.m[i][j] + temp) % MOD;
            }
        }
    }
    return res;
}


Matrix poww(Matrix a, int k){
    if(k == 1){
        return a;
    }

    if(k % 2 == 0){
       Matrix temp = poww(a, k/2);
       return mul(temp, temp);
    }
    else{
        Matrix temp = poww(a, k - 1);
        return mul(temp, a);
    }
}


void process(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a.m[i][j];
        }
    }

    Matrix ans = poww(a, k);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << ans.m[i][j] << " ";
        }
        cout << "\n";
    }


    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
