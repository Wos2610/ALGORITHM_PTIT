#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e, u, x, y;
int mark[M];
vector<vector<int>> save(1006);

void BFS(int i){
    mark[i] = 1;
    cout << i << " ";
    queue<int> q;
    q.push(i);

    while(q.size()){
        int k = q.front();
        q.pop();
        for(int i = 0; i < save[k].size(); i++){
            if(mark[save[k][i]] == 0){
                cout << save[k][i] << " ";
                mark[save[k][i]] = 1;
                q.push(save[k][i]);
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










