#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], b[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n;

    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++;
    }

    sort(a, a + n);

    int res = a[n - 1] - a[0];
    if(res >= n){
        cout << res - m.size() + 1;
    }
    else{
        cout << "0";
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





