#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int v, e, x, y;
vector<vector<int>> ke(1006);
int mark[1006];

void BFS(int u){
    queue<int> q;
    q.push(u);

    while(q.size()){
        int temp = q.front();
        q.pop();
        mark[temp] = 1;

        for(int i = 0; i < ke[temp].size(); i++){
            int k = ke[temp][i];
            if(mark[k] == 0){
                q.push(k);
                mark[k] = 1;
            }
        }

    }
}

int soTPLT(){

    int dem = 0;
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
        mark[i] = 0;
        ke[i].clear();
    }

    for(int i = 0; i < e; i++){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    int n0 = soTPLT();

    int n1 = -1;
    int index = 999;
    int res = n0;
    for(int i = 1; i <= v; i++){
        for(int j = 1; j <= v; j++){
            mark[j] = 0;
        }
        mark[i] = 1;
        n1 = soTPLT();
        if(n1 > res){
            res = n1;
            index = i;
        }
    }

    if(res == n0){
        cout << "0";
    }
    else{
        cout << index;
    }
    cout << "\n";
}

int main()
{
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
