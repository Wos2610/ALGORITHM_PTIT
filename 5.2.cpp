#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#define M 1000006

using namespace std;

int n, y;
int a[106][106];
int parent[106];
vector<pair<int, int>> save;

struct Edge{
    int u, v, x;
};

vector<Edge> e;

bool cmp(Edge e1, Edge e2){
    if(e1.x == e2.x){
        if(e1.u == e2.u){
            return e1.v < e2. v;
        }
        return e1.u < e2.u;
    }
    return e1.x < e2.x;
}

int findParent(int y){
    if(parent[y] == y) return y;
    return parent[y] = findParent(parent[y]);
}

void Kruskal(){
    int m = e.size();
    int res = 0;
    for(auto i : e){
        int p1 = findParent(i.u);
        int p2 = findParent(i.v);
        if(p1 != p2){
            res += i.x;
            save.push_back({i.u, i.v});
            parent[p2] = p1;
        }
    }
    cout << "dH = " << res << "\n";

    for(auto i : save){
        cout << i.first << " " << i.second << "\n";
    }
}

int main(){
    cin >> n;

    map<pair<int, int>, int> mark;

    for(int i = 1; i <= n; i++){
        parent[i] = i;
        for(int j = 1; j <= n; j++){
            cin >> y;
            if(y != 0 && mark[{j, i}] == 0){
                e.push_back({i, j, y});
                mark[{i, j}] = 1;
            }
        }
    }

    sort(e.begin(), e.end(), cmp);

    for(auto i : e){
        cout << i.u << " " << i.v << " " << i.x << "\n";
    }

    Kruskal();
}
