#include<bits/stdc++.h>

using namespace std;

int a[1006], b[1006], mark[1006];
int n, k, d;

void Try(int i){
    if(i == n + 1){
        for(int j = 1; j <= n; j++){
            if(a[j] != b[j]){
                d++;
                return;
            }
        }
        cout << d;
        return;
    }

    for(int j = 1; j <= n; j++){
        if(!mark[j]){
            a[i] = j;
            mark[j] = 1;
            Try(i + 1);
            mark[j] = 0;
        }
    }
}

void process(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    d = 1;
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



