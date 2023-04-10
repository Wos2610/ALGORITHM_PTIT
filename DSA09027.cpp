#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, m, p, q, x, y, u, v, k, d;
int mark[M];
vector<vector<int>> save(1006);
vector<int> truoc(1006, 0);

int BFS(int u, int v){
    int mark[n + 6] = {0};
    mark[u] = 1;
    queue<int> q;
    q.push(u);

    while(q.size()){
        p = q.front();
        if(p == v){
            return 1;
        }
        q.pop();
        for(int i = 0; i < save[p].size(); i++){
            k = save[p][i];
            if(mark[k] == 0){
                mark[k] = 1;
                q.push(k);
            }
        }
    }

    return 0;
}
void process(){
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        save[i].clear();
    }

    for(int i = 0; i < m; i++){
        cin >> x >> y;
        save[x].push_back(y);
        save[y].push_back(x);
    }

    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> x >> y;
        if(BFS(x, y)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}











