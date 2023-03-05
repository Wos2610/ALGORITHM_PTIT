#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n;

int check(){
    for(int i = 1; i < n; i++){
        if(a[i] == 0 && a[i + 1] == 0){
            return 0;
        }
    }
    return 1;
}

void Try(int i){
    if(i == n){
        if(check()){
            for(int j = 1; j <= n; j++){
                if(a[j] == 0){
                    cout << "H";
                }
                else{
                    cout << "A";
                }
            }
            cout << "\n";
        }
        return;
    }

    for(int j = 1; j >= 0; j--){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n;
    a[1] = 0;
    a[n] = 1;
    Try(2);
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}

