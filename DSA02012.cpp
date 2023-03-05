#include<bits/stdc++.h>

using namespace std;

int a[1006][1006], b[1006];
int n, m, d;
vector<int> save;

void Try(int i, int j){
    if(i > m || j > n){
        return;
    }
    if(i == m && j == n){
        d++;
        return;
    }

    Try(i + 1, j);
    Try(i, j + 1);
}

void process(){
    d = 0;
    cin >> m >> n;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    Try(1, 1);

    cout << d;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}




