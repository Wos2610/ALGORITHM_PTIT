#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long n, k;

void process(){
    cin >> n >> k;

    if(k > n){
        cout << "0";
    }
    else{
        long long res = (n - k + 1) % MOD;
        for(long long i = n - k + 2; i <= n; i++){
            res = (res * i) % MOD;
        }
        cout << res;
    }
    cout << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}











