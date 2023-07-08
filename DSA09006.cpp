#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int v, e, s, t, x, y;

vector<vector<int>> ke(1006);
int truoc[1006];
int mark[1006];

void DFS(int i){
    mark[i] = 1;
    if(i == t){
        vector<int> save;
        save.push_back(t);
        while(t != s){
            t = truoc[t];
            save.push_back(t);
        }
        for(int j = save.size() - 1; j >= 0; j--){
            cout << save[j] << " ";
        }
        cout << "\n";
        return;
    }

    for(int j = 0; j < ke[i].size(); j++){
        int temp = ke[i][j];
        if(mark[temp] == 0){
            truoc[temp] = i;
            DFS(temp);
        }
    }
}

void process(){
    cin >> v >> e >> s >> t;

    for(int i = 1; i <= v; i++){
        mark[i] = 0;
        truoc[i] = 0;
        ke[i].clear();
    }
    for(int i = 0; i < e; i++){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    DFS(s);
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
