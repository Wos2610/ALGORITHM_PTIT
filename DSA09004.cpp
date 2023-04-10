#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e, x, y, u;
int mark[M];
vector<vector<int>> save(1006);

void DFS(int u){
    mark[u] = 1;
    cout << u << " ";
    for(int i = 0; i < save[u].size(); i++){
        if(mark[save[u][i]] == 0){
            DFS(save[u][i]);
        }
    }
}

void process(){
    cin >> v >> e >> u;

    for(int i = 0; i < save.size(); i++){
        save[i].clear();
    }

    for(int i = 1; i <= e; i++){
        mark[i] = 0;
        cin >> x >> y;
        save[x].push_back(y);
        save[y].push_back(x);
    }

    for(int i = 1; i <= v; i++){
        sort(save[i].begin(), save[i].end());
    }

    DFS(u);
    cout << "\n";
}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}










