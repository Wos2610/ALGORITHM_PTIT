#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;
int n, w;
int s[M];
int f[1006][1006];
int a[M] ={};
int c[M] = {};

void path(int u, int v){
    if(u == 0){
        return;
    }
    if(f[u][v] == f[u - 1][v]) path(u - 1, v);
    else{
        path(u - 1, v - a[u]);
        s[u] = 1;
    }
}

void process(){
    cin >> n >> w;

    for(int i = 1; i <= n; i++){
        cin >> c[i];
        s[i] = 0;
    }

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }


    for(int i = 0; i <= n + 1; i++){
        for(int j = 0; j <= w + 1; j++){
            f[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            if(j - a[i] >= 0){
                f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + c[i]) ;
            }
            else{
                f[i][j] = f[i - 1][j];
            }
        }
    }

    cout << f[n][w] << "\n";

    path(n, w);

    for(int i = 1; i <= n; i++){
        cout << s[i] << " ";
    }

}

int main(){
    int T = 1;
    //cin >> T;

    while(T--){
        process();
    }
}











