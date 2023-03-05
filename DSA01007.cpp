#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n;

void Try(int i){
    if(i == n + 1){
        for(int j = 1; j <= n; j++){
            cout << (char)(a[j] + 'A');
        }
        cout << " ";
        return;
    }

    for(int j = 0; j <= 1; j++){
        a[i] = j;
        Try(i + 1);
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
