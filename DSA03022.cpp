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

    long long m1 = max(a[n - 2] * a[n - 1], a[0] * a[1]);
    long long m2 = max(a[0] * a[1] * a[n - 1], a[n - 3] * a[n - 2] * a[n - 1]);
    cout << max(m1, m2);
    cout << "\n";
}

int main(){
    int T;
    T = 1;
    while(T--){
        process();
    }
}








