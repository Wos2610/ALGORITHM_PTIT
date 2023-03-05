#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;
int n, k;
int a[M];

void process(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    long long sum1 = 0;
    long long sum2 = 0;

    if(k > n - k){
        k = n - k;
    }

    for(int i = 0; i < k; i++){
        sum1 += a[i];
    }

    for(int i = k; i < n; i++){
        sum2 += a[i];
    }

    cout << sum2 - sum1;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









