#include<bits/stdc++.h>
#define M 1000006
using namespace std;

long long a[M], m[M], r[M];
vector<int> save;
long long n, k;

void process(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    long long d = 0;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            int x = lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a;
            if(x != n + 1){
                d += (x - j - 1);
            }
        }
    }

    cout << d << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








