#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int v, e, x, y, u, d;
vector<vector<int>> ke(1006);
int mark[M];
int a[M];
vector<int> save;

void Hamilton(int i){
    if(save.size() == v){
        d = 1;
        return;
    }
    for(int j = 0; j < ke[i].size(); j++){
        int k = ke[i][j];
        if(mark[k] == 0){
            mark[k] = 1;
            save.push_back(k);
            Hamilton(k);
            mark[k] = 0;
            save.pop_back();
        }
    }
}

void process(){
    cin >> v >> e;

    d = 0;
    for(int i = 1; i <= v; i++){
        ke[i].clear();
    }
    for(int i = 0; i < e; i++){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    for(int i = 1; i <= v; i++){
        for(int j = 1; j <= v; j++){
            mark[i] = 0;
        }
        save.clear();
        mark[i] = 1;
        save.push_back(i);
        Hamilton(i);
        if(d == 1){
            break;
        }
    }

    cout << d << "\n";
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
