#include<bits/stdc++.h>
#define M 93
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];

long long poww(long long n, long long k){
    if(k == 0){
        return 1;
    }
    long long temp = poww(n, k/2);
    if(k % 2 == 0){
        return (temp * temp) % MOD;
    }
    return (((temp * temp) % MOD) * n) % MOD;
}

void process(){
    cin >> n;
    cout << poww(2, n - 1) << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









