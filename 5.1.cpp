#include<iostream>
#include<vector>
#include<queue>
#define M 1000006

using namespace std;

int n, u;
int a[106][106];
int mark[106];

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
        for(int i = 0; i < save1.size(); i++){
            cout << save1[i].first << " " << save1[i].second << "\n";
        }
    }
}

void BFS(int u){
    mark[u] = 1;
    queue<int> q;
    q.push(u);

    while(q.size()){
        int temp = q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if(a[temp][i] == 1 && mark[i] == 0){
                mark[i] = 1;
                q.push(i);
                if(temp > i){
                   save2.push_back({i, temp});
                }
                else{
                    save2.push_back({temp, i});
                }
            }
        }
    }
}

void TreeBFS(int u){
    for(int i = 1; i <= n; i++){
        mark[i] = 0;
    }

    BFS(u);
    if(save2.size() == n - 1){
        for(int i = 0; i < save2.size(); i++){
            cout << save2[i].first << " " << save2[i].second << "\n";
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

    cout << "DFS tree\n";
    TreeDFS(u);
    cout << "BFS tree\n";
    TreeBFS(u);

}
