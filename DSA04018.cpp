#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M];
vector<int> save;
long long m, n, k, d;


void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int k = lower_bound(a, a + n, 1) - a;

    if(k == 0){
        d = 0;
    }
    else{
        d = k;
    }
    cout << d;

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








