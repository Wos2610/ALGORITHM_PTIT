#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int n, m, u, v;

void process(){
    vector<pair<int, int>> save;

    vector<vector<int>> ke(100006);
    map<pair<int, int>, int> mark;

    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
        mark[{u, v}] = 1;
        mark[{v, u}] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(ke[i].size() >= 2){
            for(int j = 0; j < ke[i].size() - 1; j++){
                int temp1 = ke[i][j];
                int temp2 = ke[i][j + 1];
                if(mark[{temp1, temp2}] == 0 || mark[{temp2, temp1}] == 0){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    cout << "YES\n";
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
