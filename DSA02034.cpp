#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
vector<string> save;
int n, k, d;
char c;

int check(){
    for(int i = 1; i < n; i++){
        if(abs(a[i + 1] - a[i]) == 1){
            return 0;
        }
    }
    return 1;
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




