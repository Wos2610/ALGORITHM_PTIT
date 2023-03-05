#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], b[M];
vector<int> save;
long long m, n, k, x;
string s;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    long long sum = 0;
    for(int i = 1; i < n; i++){
        sum =  (sum + ((i * a[i]) % MOD)) % MOD;
    }

    cout << sum;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








