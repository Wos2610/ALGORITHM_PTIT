#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], m[M], r[M];
vector<int> save;
long long n, k, x;


void process(){
    cin >> n >> x;

    map<long long, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]] = i + 1;
    }

    sort(a, a + n);
    int k = lower_bound(a, a + n, x) - a;

    while(a[k] > x){
        k--;
        if(k == -1){
            break;
        }
    }
    if(k != -1){
        cout << m[a[k]];
    }
    else{
        cout << k;
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








