#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e, s, t, x, y, m;
int mark[M];
vector<vector<int>> save(1006);
vector<int> path(1006, 0);

void BFS(int u){
    mark[u] = 1;
    queue<int> q;
    q.push(u);

    while(q.size()){
        int k = q.front();
        mark[k] = 1;
        q.pop();
        for(int i = 0; i < save[k].size(); i++){
            int p = save[k][i];
            if(mark[p] == 0){
                q.push(p);;
                path[p] = k;
                mark[p] = 1;
            }
            if(p == t){
                vector<int> res;
                while(p != s){
                    res.push_back(p);
                    p = path[p];
                }
                res.push_back(s);
                for(int i = res.size() - 1; i >= 0; i--){
                    cout << res[i] << " ";
                }
                m = 1;
                return;
            }

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

    if(s == t){
        cout << s;
        m = 1;
    }
    else{
       BFS(s);
    }

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










