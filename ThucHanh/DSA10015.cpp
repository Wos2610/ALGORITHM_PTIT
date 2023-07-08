#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#define M 1000006

using namespace std;

int n, m, x, y, w;
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
    cout << res << "\n";

}

void process(){
    cin >> n >> m;

    map<pair<int, int>, int> mark;

    e.clear();
    for(int i = 1; i <= m; i++){
        parent[i] = i;
        cin >> x >> y >> w;
        if(mark[{y, x}] == 0){
            e.push_back({x, y, w});
            mark[{x, y}] = 1;
        }
    }

    sort(e.begin(), e.end(), cmp);

    Kruskal();
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
