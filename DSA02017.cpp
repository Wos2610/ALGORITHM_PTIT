#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int a[10][10];

void Try(int i, int j, int sum, int dem){
    if(i > 8 || j > 8){
        return;
    }

    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            if(l[i - j + n] == 0 && r[i + j - 1] == 0){
                l[i - j + n] = 1;
                r[i + j - 1] = 1;
                r[i] = 1;
                c[i] = 1;
                Try(i + 1, j, sum + a[i][j]);
                Try(i, j + 1, sum + a[i][j]);
            }
        }
    }
}

void process(){
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            cin >> a[i][j];
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











