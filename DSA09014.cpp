#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int v, e, x, y;
vector<int> parent(M, 0);

int findParent(int u){
    if(parent[u] == u) return u;
    return parent[u] = findParent(parent[u]);
}

void process()
{
    cin >> v >> e;

    for(int i = 1; i <= v; i++){
        parent[i] = i;
    }
    vector<pair<int, int>> save;
    for(int i = 0; i < e; i++){
        cin >> x >> y;
        save.push_back({x, y});
    }

    for(auto i : save){
        x = findParent(i.first);
        y = findParent(i.second);
        if(x != y){
            parent[y] = x;
        }
        else{
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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




