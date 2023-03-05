#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, k;

int check(){
    int d = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1){
            d++;
            if(d > k){
                return 0;
            }
        }
    }

    if(d == k){
        return 1;
    }
    return 0;
}

void Try(int i){
    if(i == n + 1){
        if(check()){
            for(int j = 1; j <= n; j++){
                cout << a[j];
            }
            cout << "\n";
        }
        return;
    }

    for(int j = 0; j <= 1; j++){
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


