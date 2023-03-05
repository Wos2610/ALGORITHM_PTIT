#include<bits/stdc++.h>

using namespace std;

int a[1006], b[1006], mark[1006];
int n, k, d;

void Try(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; j++){
            cout << (char)(a[j] - 1 + 'A');
        }
        cout << "\n";
        return;
    }

    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> k;

    Try(1);

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}



