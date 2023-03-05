#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], b[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a, a + n, greater<int>());
    sort(b, b + m);

    cout << (long long)a[0] * b[0];
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}





