#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n;
int a[1006][1006];

void Try(int n){
    if(n == 0){
        return;
    }

    for(int i = 1; i <= n; i++){
        a[n][i] = a[n + 1][i] + a[n + 1][i + 1];
    }
    Try(n - 1);
}

void process(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[n][i];
    }

    Try(n - 1);

    for(int i = 1; i <= n; i++){
        cout << "[";
        for(int j = 1; j <= i; j++){
            cout << a[i][j];
            if(j != i) cout << " ";
            else cout << "] ";
        }
    }
    cout << "\n";

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    int T;
    cin >> T;
    while(T--){
        process();
    }
}




