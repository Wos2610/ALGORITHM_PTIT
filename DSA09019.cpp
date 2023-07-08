#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int v, e, x, y;
int parent[M];

int findParent(int u){
    if(parent[u] == u) return u;
    return parent[u] = findParent(parent[u]);
}

void process(){
    cin >> v >> e;

    vector<pair<int, int>> save;

    for(int i = 1; i <= v; i++){
        parent[i] = i;
    }
    for(int i = 0; i < e; i++){
        cin >> x >> y;
        save.push_back({x, y});
    }

    for(auto i : save){
        x = findParent(i.first);
        y = findParent(i.second);

        if(x == y){
            cout << "YES\n";
            return;
        }
        else{
            parent[y] = x;
        }
    }

    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}
