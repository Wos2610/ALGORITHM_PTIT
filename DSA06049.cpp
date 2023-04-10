#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];


void process(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    long long res = 0;
    for(int i = 0; i < n; i++){
        int m = lower_bound(a, a + n, k + a[i]) - a;
        if(m != n){
            m--;
            res += (long long)(m - i);
        }
        else{
            if(k + a[i] > a[n - 1]){
                res += (long long)(n - i - 1);
            }
        }

    }

    cout << res;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}










