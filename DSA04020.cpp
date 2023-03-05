#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M];
vector<int> save;
long long m, n, k, x;


void process(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int x = lower_bound(a, a + n, k) - a;

    if(a[x] == k){
        cout << x + 1;
    }
    else{
        cout << "NO";
    }
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








