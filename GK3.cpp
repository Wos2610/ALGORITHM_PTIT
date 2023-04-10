#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#define M 1000006

using namespace std;

int n, x, y, z, u;
int a[106][106];
int parent[106];
vector<vector<pair<int, int>>> ke;
vector<int> save;
vector<pair<int, int>> mst;
int mark[106]; // 1 la thuoc MST / 0 la thuoc cay goc
int m;

void Prim(int u){
    save.push_back(u);
    mark[u] = 1;
    int res = 0;
    while(save.size() != n){
        int dmin = 9999999;
        pair<int, int> emin;
        m = 0;
        for(int i = 0; i < save.size(); i++){
            int temp = save[i];
            for(int j = 1; j <= n; j++){
                if(mark[j] == 0 && a[temp][j] != 0 && dmin > a[temp][j]){
                    dmin = a[temp][j];
                    emin = {temp, j};
                    m = 1;
                }
            }
        }
        if(m == 0){
            return;
        }
        res += dmin;
        save.push_back(emin.second);
        sort(save.begin(), save.end());
        mark[emin.second] = 1;
        if(emin.second < emin.first){
            swap(emin.first, emin.second);
        }
        mst.push_back(emin);
    }

    cout << "dH = " << res << "\n";
    for(auto i : mst){
        cout << i.first << " " << i.second << "\n";
    }
}
int main(){
    cin >> n >> u;

    map<pair<int, int>, int> mark;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    Prim(u);
    if(m == 0){
        cout << "No spanning tree\n";
    }
}
