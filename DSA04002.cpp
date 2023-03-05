#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], m[M], r[M];
vector<int> save;
long long n, k;

long long dao(long long n){
    long long m = 0;

    while(n > 0){
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

long long poww(long long n, long long k){
    if(k == 1){
        return n % MOD;
    }

    long long temp = poww(n, k/2);
    if(k % 2 == 0){
        return (temp * temp) % MOD;
    }
    else{
        return (((temp * temp) % MOD ) * n) % MOD;
    }
}

void process(){
    cin >> n;
    long long m = dao(n);
    if(n != 0){
        cout << poww(n, m);
    }
    else{
        cout << "0";
    }

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








