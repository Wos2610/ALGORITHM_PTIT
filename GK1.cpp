#include<iostream>
#include<vector>
#include<queue>
#define M 1000006

using namespace std;

int n, u;
int a[106][106];
int mark[106];
int m;

vector<pair<int, int>> save1, save2;

void DFS(int u){
    mark[u] = 1;
    for(int i = 1; i <= n; i++){
        if(a[u][i] == 1 && mark[i] == 0){
            if(u > i){
                save1.push_back({i, u});
            }
            else{
                save1.push_back({u, i});
            }
            DFS(i);
        }
    }
}

void TreeDFS(int u){
    for(int i = 1; i <= n; i++){
        mark[i] = 0;
    }
    DFS(u);
    if(save1.size() == n - 1){
        cout << "Stack DFS tree\n";
        m = 1;
        for(int i = 0; i < save1.size(); i++){
            cout << save1[i].first << " " << save1[i].second << "\n";
        }
    }
}

int main(){
    cin >> n >> u;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    TreeDFS(u);
    if(m == 0){
        cout << "No spanning tree\n";
    }

}

