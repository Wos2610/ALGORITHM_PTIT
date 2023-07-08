#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int x, y, v, e, d;
vector<vector<int>> ke(1006);
int mark[M];

void DFS(int i){
    mark[i] = 1;
    for(int j = 0; j < ke[i].size(); j++){
        int x = ke[i][j];
        if(mark[x] == 0){
            DFS(x);
        }
        else if(mark[x] == 1){
            d = 1;
            return;
        }
    }

    mark[i] = 2;
}

void process()
{
    cin >> v >> e;
    for(int i = 1; i <= v; i++){
        mark[i] = 0;
        ke[i].clear();
    }
    d = 0;

    for(int i = 0; i < e; i++){
        cin >> x >> y;
        ke[x].push_back(y);
    }

    for(int i = 1; i <= v; i++){
        if(mark[i] == 0 && d == 0){
            DFS(i);
        }
    }

    if(d == 1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while (T--)
    {
        process();
    }
    return 0;
}




