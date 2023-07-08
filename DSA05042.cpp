#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

long long n, k;
long long a[M];

void process(){
    cin >> n >> k;
    int d = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] == 0){
            d = 1;
        }
    }

    if(k == 0 && d == 0){
        cout << "NO\n";
        return;
    }

    long long f[n + 6] = {0};

    map<long long, int> mark;
    f[1] = a[1];
    for(int i = 2; i <= n; i++){
        f[i] = f[i - 1] + a[i];
        mark[f[i]] = 1;
    }

    int m = 0;
    for(int i = 0; i <= n; i++){
        //cout << f[i] << " ";
        if(mark[k + f[i]] == 1){
            m = 1;
            break;
        }
    }

    if(m){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
