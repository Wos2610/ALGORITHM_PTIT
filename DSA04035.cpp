#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a, b;

long long poww(long long a, long long b){
    if(b == 0){
        return 1;
    }

    long long temp = poww(a, b/2);
    if(b % 2 == 0){
        return (temp * temp) % MOD;
    }
    else{
        return (((temp * temp) % MOD) * a) % MOD;
    }
}

int main(){
    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0){
            return 0;
        }
        cout << poww(a, b) << "\n";
    }
}








