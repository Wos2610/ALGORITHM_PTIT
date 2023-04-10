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
        cout << "Queue BFS tree\n";
        m = 1;
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

    TreeBFS(u);
    if(m == 0){
        cout << "No spanning tree\n";
    }

}


