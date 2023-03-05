#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M];
vector<int> save;
long long m, n, k, x;


void process(){
    cin >> m >> n >> k;

    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    for(int i = m; i < m + n; i++){
        cin >> a[i];
    }

    sort(a, a + m + n);

    cout << a[k - 1];

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








