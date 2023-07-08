#include<bits/stdc++.h>
#define M 93
#define MOD 123456789

using namespace std;

long long n, k;
long long a[M];

long long Try(long long n, long long k){
    if(n == 1) return 1;
    if(k == a[n]){
        return n;
    }
    else if(k > a[n]){
        return Try(n - 1, k - a[n]);
    }
    else{
        return Try(n - 1, k);
    }
}
void process(){
    cin >> n >> k;
    cout << Try(n, k) << "\n";
}

int main(){
    int T;
    cin >> T;
    a[1] = 1;

    for(int i = 2; i <= 50; i++){
        a[i] = a[i - 1] * 2;
    }
    while(T--){
        process();
    }
}









