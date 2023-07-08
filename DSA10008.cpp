#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int v, e, x, y, w, u;
int a[1006][1006] = {0};
vector<vector<int>> ke(1006);

struct Point{
    int x;
    int y;
    int z;
};

void process()
{
    cin >> v >> e >> u;

    vector<Point> save;
    for(int i = 0; i < e; i++){
        cin >> x >> y >> w;
        save.push_back({x, y, w});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, u});
    int m[v + 6] = {0};

    while(q.size()){
        x = q.top().first;
        y = q.top().second;
        q.pop();
        m[y] = 1;

        for(auto  i : save){

        }
    }

}

int main()
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        process();
    }
}
