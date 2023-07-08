#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int n, m, x, y;
vector<vector<int>> ke(1006);

void process() {
    cin >> n >> m;

    vector<pair<int, int>> save;
    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        save.push_back({x, y});
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    for(int i = 1; i <= n; i++){

    }



}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while (T--) {
        process();
    }
    return 0;
}





