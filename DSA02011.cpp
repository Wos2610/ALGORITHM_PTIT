#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int n, s;
int res = 999999;
int t[M];

void Try(int i, int sum, int dem){
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
        Try(i + 1, sum + j * t[i], dem + j);
    }
}


void process(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        cin >> t[i];
    }

    res = 999999;
    Try(1, 0, 0);

    if(res == 999999){
        cout << "-1\n";
    }
    else{
        cout << res << "\n";
    }

}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
