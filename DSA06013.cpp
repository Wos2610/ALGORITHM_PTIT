#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, d, k;
long long x;

void process(){
    cin >> n >> k;

    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++;
    }

    if(m[k]){
        cout << m[k];
    }
    else{
        cout << "-1";
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





