#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int v, e, u, x, y;
vector<vector<int>> ke(1006);
int mark[M];
vector<pair<int, int>> save;

void DFS(int i){
    mark[i] = 1;

    for(int j = 0; j < ke[i].size(); j++){
        int temp = ke[i][j];
        if(mark[temp] == 0){
            mark[temp] = 1;
            save.push_back({i, temp});
            DFS(temp);
        }
    }
}

void process(){
    cin >> v >> e >> u;

    save.clear();
    for(int i = 1; i <= v; i++){
        ke[i].clear();
        mark[i] = 0;
    }

    for(int i = 1; i <= e; i++){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    DFS(u);

    if(save.size() == v - 1){
        for(int i = 0; i < save.size(); i++){
            cout << save[i].first << " " << save[i].second << "\n";
        }
    }
    else{
        cout << "-1\n";
    }

}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
