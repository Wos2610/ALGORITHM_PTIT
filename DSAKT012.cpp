#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int a[M], t[M];
int n, s, res = 999999, sum, dem;

void Try(int i){
    if(i > n){
        if(sum == s){
            res = min(res, dem);
        }
        return;
    }

    if(sum > s){
        return;
    }

    if(dem > res){
        return;
    }

    for(int j = 0; j < 2; j++){
        sum += j * t[i];
        dem += j;
        Try(i + 1);
        sum -= j * t[i];
        dem -= j;
    }
}


void process(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        cin >> t[i];
    }

    Try(1);
    if(res == 999999){
        cout << -1;
    }
    else{
        cout << res;
    }

}

int main(){
    int T = 1;
    // cin >> T;
    while(T--){
        process();
    }
}
