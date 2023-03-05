#include<bits/stdc++.h>

using namespace std;

int a[1006][1006];
int n, d;

void Try(int i, int j, string res){
    if(i > n || j > n){
        return;
    }

    if(i == n && j == n){
        cout << res << " ";
        d++;
        res = "";
        return;
    }

    if(a[i + 1][j] == 1){
        Try(i + 1, j, res + 'D');
    }

    if(a[i][j + 1] == 1){
        Try(i, j + 1, res + 'R');
    }

}

void process(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    d = 0;
    if(a[1][1] == 1){
        Try(1, 1, "");
    }

    if(d == 0){
        cout << "-1";
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




