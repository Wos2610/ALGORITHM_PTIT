#include<bits/stdc++.h>

using namespace std;

int a[1006], b[1006], mark[1006];
int n, k, d;

int check(){
    if(a[1] != 1 || a[n] != 0){
        return 0;
    }

    int d[n + 6] = {0};
    for(int i = 1; i <= n; i++){
        if(a[i] == 1 && a[i + 1] == 1){
            return 0;
        }
        if(a[i] == 0){
            d[i] = d[i - 1] + 1;
            if(d[i] > 3){
                return 0;
            }
        }
        else{
            d[i] = 0;
        }
    }
    return 1;
}

void Try(int i){
    if(i == n + 1){
        if(check()){
            for(int j = 1; j <= n; j++){
                if(a[j] == 0){
                    cout << '6';
                }
                else{
                    cout << '8';
                }
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
    cin >> n ;

    Try(1);

    cout << "\n";
}

int main(){
    process();
}



