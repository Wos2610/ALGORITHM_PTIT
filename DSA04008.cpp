#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n;
struct Matrix{
    long long m[16][16];
} a;

Matrix mul(Matrix a, Matrix b){
    Matrix res;

    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= 2; j++){
            res.m[i][j] = 0;
            for(int k = 1; k <= 2; k++){
                long long temp = (a.m[i][k] * b.m[k][j]) % MOD;
                res.m[i][j] = (res.m[i][j] + temp) % MOD;
            }
        }
    }
    return res;
}

Matrix dv;
Matrix poww(Matrix a, int k){
    if(k == 0) return dv;
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
    cin >> n;

    dv.m[1][1] = dv.m[2][2] = 1;
    dv.m[1][2] = dv.m[2][1] = 0;

    a.m[1][1] = a.m[1][2] = a.m[2][1] = 1;
    a.m[2][2] = 0;

    Matrix res = poww(a, n - 1);
    cout << res.m[1][1] << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}












