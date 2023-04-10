#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e, s, t, x, y, m;
int mark[M];
vector<vector<int>> save(1006);
vector<int> path(1006);

void DFS(int u){
    if(m == 1){
        return;
    }
    if(u == t){
        u = s;
        while(u != t){
            cout << u << " ";
            u = path[u];
        }
        cout << t;
        m = 1;
        return;
    }

    mark[u] = 1;

    for(int i = 0; i < save[u].size(); i++){
        if(mark[save[u][i]] == 0){
            path[u] = save[u][i];
            DFS(save[u][i]);
        }
    }
}

void process(){
    cin >> v >> e >> s >> t;

    m = 0;
    path.clear();
    for(int i = 1; i <= v; i++){
        save[i].clear();
    }

    for(int i = 1; i <= e; i++){
        mark[i] = 0;
        cin >> x >> y;
        save[x].push_back(y);
    }

    DFS(s);
    if(m == 0){
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










