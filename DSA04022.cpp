#include<bits/stdc++.h>
#define M 93
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];

long long dq(long long n, long long k){
    if(n == 1){
        return 1;
    }
    if(k == a[n - 1] + 1){
        return n;
    }
    if(k <= a[n - 1]){
        return dq(n - 1, k);
    }
    return dq(n - 1, k - a[n - 1] - 1);
}

void process(){
    cin >> n >> k;
    cout << (char)(dq(n, k) - 1 + 'A') << "\n";
}

int main(){
    int T;
    cin >> T;
    a[1] = 1;
    for(int i = 2; i <= 50; i++){
        a[i] = 2 * a[i - 1] + 1;
    }
    while(T--){
        process();
    }
}









