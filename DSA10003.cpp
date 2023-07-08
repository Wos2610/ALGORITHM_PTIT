#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, m, x, y;
vector<int> parent(1006, 0);

int findParent(int u){
    if(parent[u] == u) return u;
    return parent[u] = findParent(parent[u]);
}

void process(){
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }

    vector<pair<int, int>> save;

    for(int i = 0; i < m; i++){
        cin >> x >> y;
        save.push_back({x, y});
    }

    for(auto i : save){
        int p1 = findParent(i.first);
        int p2 = findParent(i.second);
        if(p1 == p2){
            cout << "YES\n";
            return;
        }
        else{
            parent[p2] = p1;
        }
    }

    cout << "NO\n";
}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}
