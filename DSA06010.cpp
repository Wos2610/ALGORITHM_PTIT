#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, d, k;
long long x;

void process(){
    cin >> n;

    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> x;
        while(x > 0){
            m[x % 10]++;
            x /= 10;
        }
    }

    for(auto i : m){
        cout << i.first << " ";
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





