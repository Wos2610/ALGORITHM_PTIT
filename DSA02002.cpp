#include<bits/stdc++.h>

using namespace std;

int a[1006][1006], b[1006], mark[1006];
int n, k, d;

void Try(int n){
    if(n > 0){
        for(int i = 1; i <= n; i++){
            a[n - 1][i] = a[n][i] + a[n][i + 1];
        }
        Try(n - 1);
    }
}

void process(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[n][i];
    }

    Try(n);

    for(int i = 1; i <= n; i++){
        cout << "[";
        for(int j = 1; j <= i; j++){
            cout << a[i][j];
            if(j == i){
                cout << "] ";
            }
            else{
                cout << " ";
            }
        }
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




