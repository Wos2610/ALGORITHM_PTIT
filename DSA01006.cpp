#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n;

void Try(int i){
    if(i == n + 1){
        for(int j = 1; j <= n; j++){
            cout << a[j];
        }
        cout << " ";
        return;
    }

    for(int j = n; j >= 1; j--){
        if(!mark[j]){
            a[i]  = j;
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
