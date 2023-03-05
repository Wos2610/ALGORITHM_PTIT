#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, x, y;

void process(){
    cin >> n;

    vector<int> a(n + 6, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> x;

    for(int i = 0; i < n; i++){
        if(a[i] != x){
            cout << a[i] << " ";
        }
    }
}

int main(){
    int T;
    T = 1;
    while(T--){
        process();
    }
}





