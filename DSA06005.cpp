#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, x, y, m;

void process(){
    cin >> n >> m;

    map<int, int> m1, m2, m3;
    for(int i = 0; i < n; i++){
        cin >> x;
        m1[x]++;
        m3[x]++;
    }

    for(int i = 0; i < m; i++){
        cin >> x;
        m2[x]++;
        m3[x]++;
    }

    for(auto i : m3){
        cout << i.first << " ";
    }
    cout << "\n";

    for(auto i : m1){
        if(m2[i.first]){
            cout << i.first << " ";
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





