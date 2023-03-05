#include<bits/stdc++.h>
#define M 93
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];

int dq(long long n, long long k){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    if(k <= a[n - 2]){
        return dq(n - 2, k);
    }
    return dq(n - 1, k - a[n - 2]);
}

void process(){
    cin >> n >> k;
    cout << (char)(dq(n, k) + 'A') << "\n";
}

int main(){
    int T;
    cin >> T;
    a[1] = a[2] = 1;
    for(int i = 3; i <= 93; i++){
        a[i] = a[i - 2] + a[i - 1];
    }
    while(T--){
        process();
    }
}









