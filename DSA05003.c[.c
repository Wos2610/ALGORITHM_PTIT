#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;
int a[M];
void process(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int f[n + 6] = {0};
    f[1] = a[1];
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(a[i] > a[j]){
                f[i] = max(f[i], f[j] + a[i]);
            }
        }
    }

    sort(f + 1, f + 1 + n);
    cout << f[n];
    cout << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}











