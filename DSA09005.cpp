#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e , u, x, y;
int mark[M];
vector<vector<int>> save(1006);

void BFS(int u){
    queue<int> q;

    mark[u] = 1;
    q.push(u);
    cout << u << " ";

    while(q.size()){
        int i = q.front();
        q.pop();
        for(int j = 0; j < save[i].size(); j++){
            if(mark[save[i][j]] == 0){
                cout << save[i][j] << " ";
                mark[save[i][j]] = 1;
                q.push(save[i][j]);
            }
        }
    }
}

void process(){
    cin >> v >> e >> u;

    for(int i = 1; i <= v; i++){
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

    BFS(u);
    cout << "\n";
}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}










