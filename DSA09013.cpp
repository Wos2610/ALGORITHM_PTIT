#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e, x, y;
vector<vector<int>> save(1006);
int mark[M];

void BFS(int u){
    queue<int> q;
    q.push(u);
    mark[u] = 1;

    while(q.size()){
        int k = q.front();
        q.pop();
        for(int i = 0; i < save[k].size(); i++){
            int p = save[k][i];
            if(mark[p] == 0){
                q.push(p);
                mark[p] = 1;
            }
        }
    }
}
int soTPLT(){
    int dem = 0;

    for(int i = 1; i <= v; i++){
        mark[i] = 0;
    }

    for(int i = 1; i <= v; i++){
        if(mark[i] == 0){
            BFS(i);
            dem++;
        }
    }
    return dem;
}

void process(){
    cin >> v >> e;

    for(int i = 1; i <= v; i++){
        save[i].clear();
    }

    for(int i = 0; i < e; i++){
        cin >> x >> y;
        save[x].push_back(y);
        save[y].push_back(x);
    }

    int temp = soTPLT();

    int m = 0;
    mark[0] = 1;
    vector<pair<int, int>> res;
    for(int i = 1; i <= v; i++){
        for(int j = 0; j < save[i].size(); j++){
            int tmp = save[i][j];
            save[i][j] = 0;
            m = soTPLT();
            if(m > temp){
                if(i > tmp){
                    res.push_back({tmp, i});
                }
                else{
                    res.push_back({i, tmp});
                }
            }
            save[i][j] = tmp;
        }
    }

    sort(res.begin(), res.end());

    for(int i = 0; i < res.size(); i++){
        cout << res[i].first << " " << res[i].second << " ";
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











